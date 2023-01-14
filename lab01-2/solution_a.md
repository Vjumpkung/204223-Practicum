# Solution A

### 1.ติดตั้งไฟล์สำหรับการทดลอง filename expansion (a)
```
wget -q --no-check-certificate -O - https://www.cpe.ku.ac.th/~cpj/204223/unix/i1a | /bin/sh
```

### 2.คัดลอกไฟล์ set1 ที่ขึ้นต้นด้วย c (a)
```
cp ~/lab1a/set1/c* ~/lab1a/sol1/
```

### 3.คัดลอกไฟล์ set1 ที่มีตัวอักษร z (a)
```
cp ~/lab1a/set1/*z* ~/lab1a/sol2
```

### 4.ย้ายไฟล์ set1 ที่มี za หรือ az (a)
```
mv ~/lab1a/set1/*za* ~/lab1a/sol3
mv ~/lab1a/set1/*az* ~/lab1a/sol3
```

### 5.คัดลอกไฟล์ set2 ที่มี car พิมพ์ใดก็ได้ (a)
```
cp ~/lab1a/set2/*[cC][aA][rR]* ~/lab1a/sol4
```

### 6.คัดลอกไฟล์ set2 ที่มี car ไม่ติดกันพิมพ์ใดก็ได้ (a)
```
cp ~/lab1a/set2/*[cC]*[aA]*[rR]* ~/lab1a/sol5/
cd sol5
rm *[cC][aA][rR]*
```

### 7.คัดลอกไฟล์ set3 ที่ log ภายในเวลาที่กำหนด (a)
```
cp set3/log.0[9][0-5][0-9] sol6/ && cp set3/log.1[0-5][0-5][0-9] sol6/
```
