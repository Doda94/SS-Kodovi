import numpy as np
import pandas as pd
from sklearn.linear_model import LinearRegression

def read_data():
    dataframe = pd.read_csv('../datasets_28454_184859_Consumo_cerveja.csv')
    X = dataframe[dataframe.columns[1 : 6]]
    Y = dataframe[dataframe.columns[6]]
    X_data, Y_data = np.array(X), np.array(Y)
    for i in range(0, len(X_data)):
        for j in range(0, len(X_data[0]) - 1):
            X_data[i, j] = float(X_data[i, j].replace(',','.'))
    new_X = np.zeros((X_data.shape[0], X_data.shape[1] + 1), dtype='float')
    new_X[:, 0] = 1
    new_X[:, 1:] = X_data
    return new_X, Y_data


def main():
    X, Y = read_data()
    model = LinearRegression().fit(X, Y)
    for i in range(0, X.shape[0]):
        print(f'{model.predict(X[i].reshape(1, -1))}---------------{Y[i]}')


main()
