import yfinance as yf
import time
import pandas as pd

ticker = "AAPL"

# Create a Ticker object
stock = yf.Ticker(ticker)

# Get live price data
def get_live_price():
    live_price = stock.history(period="1d", interval="1m")
    return live_price

# Write real-time data to a CSV file
try:
    while True:
        live_data = get_live_price()
        live_data.to_csv('data/live_data_' + ticker + '.csv', mode='w', header=True)
        print("Data written to live_data.csv")
        time.sleep(60)  # Sleep for 1 minute
except KeyboardInterrupt:
    print("Stopped fetching real-time data.")
