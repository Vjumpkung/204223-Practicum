# Solution-B

### 1.ติดตั้งไฟล์สำหรับการทดลอง filename expansion (b)
```
wget -q --no-check-certificate -O - https://www.cpe.ku.ac.th/~cpj/204223/unix/i1b | /bin/sh
```

### 2.คัดลอกไฟล์ set1 ที่ขึ้นต้นด้วย c (b)
```
cp ~/lab1b/set1/c* ~/lab1b/sol1
```

### 3.คัดลอกไฟล์ set1 ที่มีตัวอักษร z (b)
```
cp ~/lab1b/set1/*z* ~/lab1b/sol2
```

### 4.ย้ายไฟล์ set1 ที่มี za หรือ az (b)
```
mv ~/lab1b/set1/*az* ~/lab1b/sol3 && mv ~/lab1b/set1/*za* ~/lab1b/sol3
```

### 5.คัดลอกไฟล์ set2 ที่มี car พิมพ์ใดก็ได้ (b)
```
cp ~/lab1b/set2/*[cC][aA][rR]* ~/lab1b/sol4
```

### 6.คัดลอกไฟล์ set2 ที่มี car ไม่ติดกันพิมพ์ใดก็ได้ (b)
```
cp ~/lab1a/set2/*[cC]*[aA]*[rR]* ~/lab1a/sol5/
cd sol5
rm *[cC][aA][rR]*
```

### 7.คัดลอกไฟล์ set3 ที่ log ภายในเวลาที่กำหนด (b)
```
cp set3/log.0[9][0-5][0-9] sol6/ && cp set3/log.1[0-5][0-5][0-9] sol6/
```
