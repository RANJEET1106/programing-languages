import pandas as pd
scores=pd.read_csv('Scores.csv')
print(scores)
print(scores['Total'].max())
print(scores.shape)
print(scores.count())
print(scores['Total'].min())
print(scores['Total'].mean())
print(scores['Total'].sum())
print(scores['Total'].sort_values())
print(scores['Total'].sort_values(ascending=False))