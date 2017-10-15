import openpyxl, pprint
   
PATH='censuspopdata.xlsx'
SHEET='Population by Census Tact'
print ('Opening workbook...')
wb=openpyxl.load_workbook(PATH)
sheet=wb.get_sheet_by_name(SHEET)
countyData={}    i

#FILL IN COUNTRYDATA WITH COUNTRY POP

print('reading rows...')
for row in range(2, sheet.max_row + 1):
    # EACH ROW IN THE SPREADSHEET HAS DATA FOR ONE CENSUS TRACT
    state =sheet['B'+str(row)].value
    county =sheet['C'+str(row)].value
    pop =sheet['D'+str(row)].value
    #MAKE SURE THE KEY EXISITS
    countyData.setdefault(state, {})
    #MAKE SURE THE KEY FOR THIS COUNTY IN THIS STATE EXISTS
    countyData[state].setdefault(county, {'tracts':0, 'pop':0})
    #EACH ROW REP ONE CENUS TRACT, SO INCREMENT BY ONE
    countyData[state][county]['tracts'] += 1
    #INCREASE THE COUNTY POP BY THE POP IN THIS CENSUS TRACT


