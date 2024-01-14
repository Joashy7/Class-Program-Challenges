txt = "No pain, no gain!?!"
punc = ''',!?;:'''
for x in txt:
  if x in punc:
    txt = txt.replace(x,"")
    print(txt)


  

  