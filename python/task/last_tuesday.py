#!/usr/bin/env python
# coding: utf-8

# In[ ]:


# Write a python program to get the date of the last Tuesday.

import datetime as dt

today = dt.date.today()
curr_day = today.weekday()

if curr_day == 1:   # Monday is index 0 and Sunday is index 6. So tuesday is index 1
    last_tuesday = dt.date.today()
    print("Today is Tuesday")

else:
    last_tuesday = today - dt.timedelta(days=curr_day-1)

print("Last Tuesday: ",last_tuesday)