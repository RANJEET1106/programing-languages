import pandas as pd

scores=pd.read_csv('Scores.csv')
print("\n\nData Frame\n\n")
print(scores.head()) #print hte first five rows of data fram
print(scores.tail()) #prints the last five rows of data frame

print(scores[scores['Name']=='Nisha'])

print(scores[scores['Gender']=='M']['Total'].max())

print(scores[scores['Physics']>85])
print(scores[scores['Physics'].between(70,85)])

#if we want only number of student
print(scores[scores['Physics']>85].shape[0])
print(scores[scores['Physics'].between(70,85)].shape[0])
print()

print(scores[(scores['Physics']>85) & (scores['Gender']=='M')].shape[0])
print(scores[(scores['Physics']>85) & (scores['Gender']=='F')].shape[0])
print()

print(scores.groupby('Gender').groups)
print(scores.groupby('CityTown').groups)