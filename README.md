Minimal project showing component relative path issue issue.

It is assumed that you have set up and initialised the esp-idf environment.
Replace esp32c6 and /dev/ttyACM4 with your device appropriate values


To test this program works:

```
git clone git@github.com:i400s/show-component-bug.git
cd ./show-component-bug/example/
idf.py set-target esp32c6
idf.py -p /dev/ttyACM4 flash
idf.py -p /dev/ttyACM4 monitor
```

To test this program fails:

```
git clone git@github.com:i400s/show-component-bug.git ./show-component-bug-fail
cd ./show-component-bug-fail/example/
idf.py set-target esp32c6
idf.py -p /dev/ttyACM4 flash
idf.py -p /dev/ttyACM4 monitor
```
