// Code for padovan sum function

// Include headers ... some required and some junk
#include <stdlib.h>
#include <netdb.h>
#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <math.h>
#include <unistd.h>
#define SIZE 100

// code strings from which we will construct password by using a mapping
char* codes[SIZE];

// the below 4 functions are junk
void abcdef(int list[], int low, int high) {
    int pivot, i, j, temp;
    if (low < high){
        pivot = low;
        i = low;
        j = high;
        while (i < j) {
            while (list[i] <= list[pivot] && i <= high) {
                i++;
            }
            while (list[j] > list[pivot] && j >= low) {
                j--;
            }
            if (i < j) {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
        temp = list[j];
        list[j] = list[pivot];
        list[pivot] = temp;
        abcdef(list, low, j - 1);
        abcdef(list, j + 1, high);
    }
}

int abcdefg(){
    int list[50];
    int size, i;
 
    printf("Enter the number of elements: ");
    scanf("%d", &size); 
    printf("Enter the elements to be sorted:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &list[i]);
    } 
    abcdef(list, 0, size - 1);
    printf("After applying quick sort\n");
    for (i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");
 
    return 0;
}

int factorpower(int r,int n) {
  int ans = 0;
  while((n % r) == 0) {
    n /= r;
    ++ans;
  }
  return ans;
}

int sumofsums(int a, int b) {
  int ans = 0;
  for(int i=1;i<=a;++i) {
    ans += i;
  }
  for(int i=1;i<=b;++i) {
    ans += i;
  }
  printf("Sum of sums of %d, %d is %d\n",a,b,ans);
  return ans;
}

// function that finds the length of a string
int ghuijfdg123(char* a) {
  int i = 0;
  for(char* x = a; *x != 0;++x)
    ++i;
  return i;
}

// function that finds the nth padovan number with the initialization as p0 = p1 = p2 = 1
long fedcba123(int n) {
    long pPrevPrev = 1, pPrev = 1, pCurr = 1, pNext = 1;
    for (int i=3; i<=n; i++) {
        pNext = pPrevPrev + pPrev;
        pPrevPrev = pPrev;
        pPrev = pCurr;
        pCurr = pNext;
    }
    return pNext;
}

// password checker function
void abcdef123(char* a){
    int len = ghuijfdg123(a); // length of password

    // mapping -- use 41st character of 1 st string, 23th character of 2nd string .... and concatenate them to get the password
    int key[] = { 41, 23, 28, 53, 59, 17, 50, 94, 12, 90, 91, 80, 25, 24, 95, 11, 64, 62, 5, 75, 34, 6, 86, 93, 69, 96, 87, 85, 8, 
    13, 88, 27, 76, 7, 84, 57, 63, 20, 39, 49, 2, 18, 40, 56, 46, 30, 68, 1, 29, 26, 58, 67, 21, 70, 52, 45, 60, 14, 65, 32, 71, 55, 
    15, 83, 31, 0, 92, 73, 81, 36, 82, 33, 74, 99, 44, 72, 42, 77, 3, 4, 38, 97, 79, 10, 54, 48, 37, 22, 35, 9, 51, 16, 61, 89, 19, 47, 
    43, 66, 98, 78 };

    // preliminary check
    // we print output after a second so that automated scripts are not efficient
    if(len != SIZE) {
      sleep(1);
      printf("Wrong password!\n");
      exit(-1);
    }

    // junk computation
    pow(4.0,.5);
    fmod(4.5,2.0);
    sin(0.0);
    cos(0.0);
    tan(0.0);

    // check password section
    for(int i=0;i<SIZE;++i) {
      if(a[i] != codes[i][key[i]]) {
	      sleep(1);
        printf("Wrong password!\n");
        exit(-1);
      }
    }
 }

int main(int argc, char** argv) {
  // catch improper usage
  if(argc != 4) {
    printf("Usage: [arg1 for function] [arg2 for function] [password]\n");
    exit(-1);
  }

  // set the codes
  memset(codes,0,sizeof codes);
  codes[0] = "0rGhaPwdLGwz26mL1tgeY35QJNg3hfnRlNrK4KnhwxUStuPI0Ygg9h7Md9Xhb3OhC2WNdS0Jvl9JWYTgDVQhrPHZDKYZLmELmDqQ";
  codes[1] = "Vo1Cld5HCaHriahPuZTWPaXkTXyQXs9b0X6ks5U1Sxqmm2wGnz62FAHExp6eVR0H22eNzTZpdAbMbZxu9djmj8c7Sniy2c85cHyo";
  codes[2] = "JBIoogiiV5KJceW4LhOHOIQ0o1GxyKbHcx4pM1yO6Lw2mumiBCEKuFsjPigrHtN47JFLw3BV9kvht0e0sHfFWRW11ANxUTjsmX7V";
  codes[3] = "dSSdnyTMar9A3m2RJ3Yzgn6znTWzPgql2pJcue7Kc6Y2tnBJsKBhBjNLpFGJjZkSyy1NGvz8pJLaCMVicMpkVJyQgUiQ57tV9NaW";
  codes[4] = "0Ps7AZX2c7c0hy301AZYRUVEo38bFTEOVbHblLtKUqV1HjUNv20KVKwLtmho2RLVar9UcA9V9VFH1zkLf1sZ6W0SyQfveCHVGEJZ";
  codes[5] = "L7lkKT3N1erV80leLYuFMR26nUo3H2QyF6avK9OVOds7qzabaUjYJbfFhPADgfUBhFsysRjxzKVQhyaxlF3t9SxdCkBGW78jkCzE";
  codes[6] = "YfWewSfzXCrc2VbU7Ez1toRm7RYLkhVPaoAvAtOUS2nI90TU60ZqIODtZXP7NqzRwLh8rzpzaefvRxKTkCekhBRH4dVqs46Jwkm0";
  codes[7] = "WbdeRe2pWJVTL6Kr9hOL0e2StcCn6sXI8B7vmCnhbQFjBIJodt2WBiCdFnvDDCfWIVSFd2xT5b5Iih9qWlDohOzOAObygFv8LTKZ";
  codes[8] = "dbfXQurMqYRSfmpmKc6bIqtG5yrAxVzXlvNcX5iplIjfcPXpndEXWKcvx6A7sfEsdG3Zxf7tr5zVrzR7Zvi6FlyTgay9F30FOG3j";
  codes[9] = "B8ir5C6vGzM4ORetv9vvYpMfCXZRtI8WfnPgpkll148dnWRO4gaMqQEh6wp2aLodyWC8L8UNFXtIbBMbG1X4zaEOm3kNNjLltyJa";
  codes[10] = "RxEoHbQKiu7k9b3ug3R3Zq4fypfw6YzFPgZKacYgVxwdoTmiwCGOHjHZ9banzJ4HQKNg3wZWeCnr9Vr0WtQXPRNLmu4U93oa4poE";
  codes[11] = "IFZkJLeNGqBUbUWaKYyR4tOqmNa5T5Fqkpbse9M9VN1eHPfUxISLzh6NppMTqsENfceoAVsnuyVkxlPuZjPApHG3NvcRcxkv19dj";
  codes[12] = "6oWqAyj3Q48oLFf86CM4R2SKxe4VmDoYfVOL4qgcC2fm5Cp7czbe3v6JkPL00qgOB2Z1ltaJoDQKjYEW99eGxyI6jIsj1H599iZu";
  codes[13] = "kF4Lu7J3K9fDZ1Q7vV6JwxGZ1lBYXPCVGupfphaA6m9tep0rdWO2wn4eIVXYK6XOCGu3fpz6r2qnWh96Yuph1ujSP7pxwvWMnfCO";
  codes[14] = "VP38Y4gZ5xDMJdMLKlfCpCzxaacJOWdYebbZ4HoflX65E0roF0w9dGemoNwGdUPwnaH4e7fG4ZZ8EdYdqEJLXflmPIWlWxrIDdaa";
  codes[15] = "m13KjkR8Y8UVFzmoxGuQHVIlo7frQSmcJ176qRaMaRTE3pYKttGQ4sYZBiu4Tf4S5e9mGW8jMOiXRjuJHsmiz12MdyGT17WgPP3R";
  codes[16] = "DcY7KKfnp43t27AeE4JCpwuaLIarFBNqrTx4oX85eHos8QYRnyJbvVyOwhzbUceSwOs9y8Ft4iewwLVqZKAOptuT4NkWM0Om1SPJ";
  codes[17] = "Ah33QEgsnc9LFhumlZg0umxxMA8dugehwBOhV9IxEw1C9vrA6TfAEwun5GJBlhlxBjHc3gaDYaAokqXqSmxrcEEqNX536GkjB1yz";
  codes[18] = "pDcWD1KoGxyotqxKM02qlj1XjF7pAeB0zxFMXwQRR7jqkUNjv5yRvKXzdWo9ASNow8ceZTXlu768O80O3I34ry0z5LTwvi8LRA57";
  codes[19] = "wH7gpPNaPTwXH3iFNnuSv6OJ6EkYR4eL1Gl6lNA1LQJxsfp1I9Zreb8MiYPF08oVnq2he60nZAlq8DCVcKsjVE5Kkli9yRzP0DAB";
  codes[20] = "MqtjTrWekQeezOHCzVCX0tuvfTnJxX7IXQe05h5cuqmR5Lodho1iEM6BCca8XsszZVOdo66aWfJwUxrpjMwNQ07jgmYdnFFQBklA";
  codes[21] = "Lwnp8J8XEorelNhRSKjLwKIfFTpct33nTTMjwkuHQAmOflQ0WxnY5pqa17G7z8L2dMU8xF8fVPYHej5ntmSf5UQTyDuugLRKGQ2p";
  codes[22] = "bgBZaUpxtOXFOumh2rRD8sz1ulscDBJkNKZKfRGB2iCTFWLy9AX5eOMXa5QGHrE0z5CaAS79afo9Y2m4OBafmllBUAgCOPSvjH7z";
  codes[23] = "wb2ek4kXRvPBqV52Mgp59QpgspPkdMJgcP9l8ZkY5mdXVf9EhXywNbAsk9WGJZm4pzTLIPdY45FCm6rKZ3I6iJbhgVEwqYl2csbW";
  codes[24] = "aoHMF0N3R7JAC3vmgzXkbfzsBkzZSS0ISKVfbCGRmkH7x4TPaguNyfp2BXThPsWRO6jeB3eU0isE0lBucvQ3PYUqrvk5EAaZQMV7";
  codes[25] = "a3mLwE6UTBfpKLzqY2uqPMQa7rxtJfOQWiPTTVwR3MlQJZgeUFTrNu3bpBHon4s2uAplILzo34KezD36zs6zvMwF9H1sXxH9c8L8";
  codes[26] = "EbQwp1Azy3OC1FeSOFbvnVO61sgYKebEEgD4jCocQlYHW3qTM138aC2FKgp0CkYT3ypOroDCHLfOiloZg2uey3GjteXXwM1pEBR7";
  codes[27] = "t8PFdfZVtSQthVuNwztdL0e6JUmsFfQzFmCN30tcpbpdd9rOrHgbb8llmU4WAx8eA5G9ZwKqihgWmirlv1y35IDI0QT4ePxh7Rln";
  codes[28] = "5ck5Au9vPPtsmGJkKGME0YMVSAfd1T5Kcr3UCkRVULnBMQMj5vvDwD32s8mMKfADDEZvvNmnwIqZR7eav8Z7hQJLG0YBf9Fx6y5S";
  codes[29] = "d1mnJ336lk0K5bG9854QBetKRL6ykQhCC3udq2sVePNxfl87gTHu4TMiAgnny8glPeJ4JEb5zLGkf5rDGXqfQuKRS45OfBAAoHEO";
  codes[30] = "XlzogYbXYVr1B6ehIydgr7FD0BPXhQ7wD9Y1UuoqG1Z5gcvllGLi2lwHckivAPLHahHLJtuJ8xcyJjbSXig8NWNEEZJcteBpBJJx";
  codes[31] = "JdtLXnY7j51p8IeBddBPsUwmNiPSgWJ0HaNiKVMe5O6vWdbYAqMqLcFhWDpZnXKJ6azBkda8jjmDUv5UCSwulEiq8YKjAxaY4By5";
  codes[32] = "sUi2XfBl3fIrmffKTfycMHIoPUyXHCGk3tXJ0UFad8tnwtEGF0D3qDSbBSTh7E1kSgVWs9qbrcshK0wxqRy8JpmsXxrECcMgPiQa";
  codes[33] = "CQ4D3lPcPjq4D6CT2E87Wyc2JUQhbMopcRB1H9vzwSxV1uAGwtVw8DmNOpWGHO4irVRSl0HKsaUNZNspl8C9DfWlvq4Vi0SgSa0p";
  codes[34] = "56pUKg5viOquWANqAMtTZRwxEJjd4WwFaEi8Jrly18M5z60La9YLbnreQV3BqX30MnAHSOEhevD7JbeB13cRHkwbb8MFqo9wFHqt";
  codes[35] = "aIK8jg7kX9mq1AIm4dv97SsiuVhbZvAmWbRjVYiTGfOGdsq8PdH1qfWEOQE6kSMjISjrNmgIEXDurFgjGzQNG51hOsgdpQKAAJrp";
  codes[36] = "r8kJswd9tsSRD73QNKX13XcwkepzUYdBq65SOASXNmQGP2G4B0mFDbC98k6mHuQyNdjh1l6Tp0XzhpLp95Wmh78EDwOogPkYw5OH";
  codes[37] = "UMJsf7MPpMOoCpvjbVBCbMoFBcRMxACaLQW9GeJIODnACd6hKrn3A5DJTHsPokHwiXdF9XZvq5fzGn20isC4C2NJDA3b8C4vswfE";
  codes[38] = "kVeKXOHdrsbAkQsWxbZKnMijFnewX1rDNX6RkUrLQuriHUwWyNEgeobIAz9kMYMquEU62pE621uHttrM2WZaWsxnnmOrsuHsCICY";
  codes[39] = "aslm0MN8PQeEiHF1uWYAf8e9PlSGQJKgjStpvGX2rAKqL6jWjEwb1QWxLa8ayPykvLGyIfl9f7WCwreuTVRJNzh0PfuGTQSEH1He";
  codes[40] = "nEvVGWxcsTHMmLfejGav9bf7iLPwIXZaznMxyGwnKw9Hcx4TTd5uPpHeeeOMjtGDKIWb3CATHbwlKwvfU5Li1ZUYR0N7yowLW0QF";
  codes[41] = "sEJ6Z6KDtYtfgzNKX1uhGBXZnRtivwOP45zY2V5WzLx68e0IjMYtWbvUsdtNFbfXY1pxy2hSNBAjxrYAfN16Gf1PERvz2Sp64W6r";
  codes[42] = "8Z0dFghT94AQvkTq1gFktiBpP8XOoy0Bl7blTDzsGsFLgT3MAaKsJSBF0F4uNRGWwaGMryjxhmaW4qzWJiXsbyB8fi7o7i0GkZbW";
  codes[43] = "yp7IYvLiIfkrhht09ADqqWqhM7qXYd529cx2jCVd2c1ypjteNUPLHN8qkUtmYuoxYhPgzs7jgaj11A2WBO1kWREzbSmd3aLgPlSe";
  codes[44] = "dpqOlzTubKUMMsOerL5LY3rDFiR1RozQpINKVIQD7MGJKiXrKBMfS6u3dwGJoKBpnZr7HAipG8l20daJEYh9Gcdtx70RofaR7KEW";
  codes[45] = "jlZZvM539Jujyo2JLkrJv84tLyTUQYABGKewvwKE4H8xMuxiw2I1f9DXtu8uK7Iy1cmgYGa7O49yLb0skjXAUvkOlIRWX99YuK4x";
  codes[46] = "9HWaJsrLKSsi8kjsS4Y9rOIXLFDohgzV4qXK3VUj6Bk3l7YMrapGARfpC0oCGG3MToPOUcD3ACn47qBKkfnIomUQNZl09nQnJifW";
  codes[47] = "fwZDNzXurKIAwQnQn7WQAYtYHlNFtwXDPnFJHgJ6LGgtLkVWIInRuRC4WLysp0i1zTaI6VMH5OJBDBnVVbcIN9BceP5FgIqeP3eZ";
  codes[48] = "DBAT7GI6FjMvDbJ182MciJDL4sJ9qaWh4EKV0JaoCmkgWcLt5uUPf8YuuzfpOTJJdUGF6QzueexMlG2ezY4yzZdHf3NdBMICFKBy";
  codes[49] = "ecmorwGAzVthSYupvyvPso0590c1vroBVtaGWQDPM8DtOh7n1uzmveRtHkX9Qrxoc9s4jct11lG0KCGRYjh8vNJ0s5V1sDXMVJkX";
  codes[50] = "Cfh5ZY8CJbIcJ0IWo4Qh39h8zoLvqQOSwaP97izT7MiSdhbWccsXVqqjLR4ZbPXewvxqseeb9LTXyKLweXW2eNdhEJwCHumkIZoS";
  codes[51] = "Ky70ltT4mNxkXiuvairHUitxIHcnxj9Dity7s4OOXSoO9cvseSyEy4gdWpWj5Y1LICYEHr0hBmpBctAPg6avgwjZxTMymGhRLEdn";
  codes[52] = "dqBzAL0lD0xSh9W9v6mkxjLgQMGicNixEhSUU8duelsd0cTudKIr0ePWNN8fImsvHIsqqaGe22bbX1Royo145K6xVgwmgJntqgOo";
  codes[53] = "sAPNnkqLMhoSIcOCyUXgeXyIuE7Rk18MBFbdMkPN2hJmNPvJJ4VIiDr6v1OCX2jrTTpLbIO9rwHWNID2OmegUg9VbenkUX5Ucnu0";
  codes[54] = "GZE51ERg9qw1hihrlGFfnge47l0OMZQYcUFfZdstzFAftomI1ayTaBEx3z1wVFmfTW7Gc2BD5IgGgi2dqAm0706yl7CZ0pnnpFyq";
  codes[55] = "K8nKSEgdSz44BFsFjHks1LbC9UrzjB819pFvScvIlpuHvgGBlhq0SKtpurdAeHtqPyBZe87JLh6CGa8nL1NNmrK6KaXfl3iHisdm";
  codes[56] = "0VDtrYsJ9SPnsS0gJkmC6r52K2rIW6rHZ5g81zf006bPBz7wvcThZAT4vxAUeWYS28xUzCdM7ZLBTecmutkyYkmQlJULhcMXR112";
  codes[57] = "eH4VR8dIfg69zIA41V6uC0artPTg65GeXyq8Hoj4vwXqooasXK9HLyNIrjfqfwvIkfFzfv2IxeR56r8oX7PIAPXQ9DjuOxK8Xh7A";
  codes[58] = "0PGJ3duFskoW9vlqb93uYgSAG5jOf73ZXLKGfH8eThBQ7ZiC0Ogl5CtJfkWG4BXuDkoutHbHxfiUpVA4SJuwj7f42woERD5gT78C";
  codes[59] = "R4H2XBMk0vlin6mtxiOCGmggxTuQPhlKcd3JoOmOLPQc4wOToG0vWoh75DunD8keEcPXgGbXRylqO7NgJZngHyB0kG7o9qY3QzsG";
  codes[60] = "Q2gRgf243KNHgeC22uilJmgjGvFfPcp41i2m9F29V1Sv3h9b30aAzyFEqdbojE89IEmi0C0GICsFn287FeXcrmNdnXnIaOA0iVNo";
  codes[61] = "3UDA1Q52mrEjvAiCHS1C7u6Pf6yWaYnnCilVrJRWbLaKHF8fDU3NrdnYWALqWCPYatDzdSWKNRMh3X1nEQiVt2w1hUsQ3YYCc1uY";
  codes[62] = "OtuZxLBgNbjBRWZgcJPxkLB3bUs8Vl3r3mnBQeK3tAgvJGEhtgFIrlyp0jUrEYAxRfqz5Nd68jGxbe4iRKVSDKqGV5HPhNCweoLo";
  codes[63] = "4taFqxJddosxjT6Qag29yeXGqhYKyoWNuKsUPfF9opREAuzct1HCKNEogUqTwcqG8Qoh7qbQf2z1qSq12rSV1BGzozOCFncpuhPB";
  codes[64] = "9G3hOAKljbHJFByTqZr7WOmwQo1AYMI2Jnp0UyCuyajV1tStnXdg0uFBCffgNYXtlUObgR2w1CJ55wAVyuQsT6avJQnH4pqAT21Z";
  codes[65] = "PdUUrIXwFuvxyUzVat8uYf8FymRdWHQWnPCfjgikJsSpape1oRF5aMwFvwGilwDsmInHq79Z1crFmIomkNbZ3FLcI4hqqtW9dvBm";
  codes[66] = "pTafAEQz5FRtRP4Oy3Dtm2SeDWz58fagzmw038hq2pneK1lX1XZ8n7wI2uJieN5H1T4oN3OAy2wart7iGPH8bH2iZrgDWPnJinpJ";
  codes[67] = "9Nu5fQqILiOJidslnAMs16zFep3zYyvpVozqfGHiiv8JQqMRPT0Wtth2bmbcCXfK31id8HqQLl6PzQz0uoTeWowcMuDBx8q9iuVc";
  codes[68] = "Jq6q9nEggVFZsxNUnYQZC1OWs3r1fWcREX5YPb9XKTctXxoEEUAFuZnJZy8KpQC24k9DG2lBLHHE5udd1CDUkywCEyjQeLI40O8s";
  codes[69] = "OYqmdayI5rrqvfOEFV97HpAWjaHL8CCtGRibHInfkjiHaOFVDUAlLXFR2gbdxTdvOGsoNTIQFx3fQjAyGtGRMOKiW3rAwqznAfCP";
  codes[70] = "O1PHCklxdUTPHUC14mwzaSq3lFgixNp69RxUeVOmzGtd4WfEhrnkdtY4cSW4iKfameQ9ou53zOtMeirixGx1oIk9yopbhZhlNwDA";
  codes[71] = "BELkgxSTxIjEey4gB0GETEYBldJ6IxoW0YsdjCmYYzsVCakyxi4kCdkqn3qMIu0PUbWeXSPTgErWguiRTMtfeXRO5BhY9MpJgF8D";
  codes[72] = "xCP5UOqEc9KBaeioEDMCbjsx7D3qF0HDd1p0KmpymjkuNWpCNFdIb7A8lQX2CRB8mrj0fBuFTZFgRd8kV3zlV9NvhIwkVM9qq0us";
  codes[73] = "XYH270kSlrpkuv0igIAlD1LXDUadtpt94gNINkXqE2Kb3nYHxCopGl1FAmD2v7CIO4cPrYEhAYD3lQl9XIAYajd3HOrHTVTZnkHt";
  codes[74] = "fDrG0L8jEEOJdtJJrLm0QUheHxezErhWnjyf6zKyDSM0AbdCrkmoAN19JRXf32vIxFxip2XQlzgsj2yW9x0AYhAGVJm1V4dJRDd9";
  codes[75] = "r5xUSRRD11B9CkCW120TB4DO1ee9WUqfzQRWFmpr8CesgdleDYJBJOExI9xeVQSxNZ7sg4CMv0IjBLQRtaHjs1q0BArFNf1SSxgr";
  codes[76] = "VtRjOYPlX3GFwxLxE0CCFiG7YkOHnN4ZEiq9LkmkTsLFtvZDr0RyyzZIZlrIFz8JOVeYN3gwTo5Z89NY5LBO6ULOdWyvG6mbdZB8";
  codes[77] = "BxHBfEr5DsNag9qUlKuEkSyOZx19VGIteJLDU9aKDoGFvjug6TOSnu6psAmvSXbczYij0clpOJGnz7vE0jF373fsLh0vFvaJH2mN";
  codes[78] = "SOl6cf0OtK21KVXvdUrUzf2NzuetpnoSDF1jDBcHP2TFai8G9c65QSUCIsSOOSqh1HB0eE6wl5vSZM6iOFueZqISPvYkXgoJUilu";
  codes[79] = "RTZpTki15FFjDDznleVOnEFHkwOOPjxWtjciqCMDarOpI5bSWOpJ8l6gwbEFsCWhXvi10nCWcmddhCcD4QuCGqxkV8rbVeRG80Vj";
  codes[80] = "oHtDkFFapgjQcvyctGn9BQxpI7S3jU3Hzv6NL8tRK16xBkLWwW6FaiHUwLKd3DJbaiXuWWFr2b4FVQodZhv6VdErsEmwm2nblUm8";
  codes[81] = "j7n7rRD2aT6dVC07Ab7MxW237JMUr7lPFrnQCaKyVLBC0vOpf1ep8JCSlbtt6REQznbCWtuUn02GhWV5pRqyOSXZaivVeg8ruyOK";
  codes[82] = "9ZmdISDrXXtrzyKCApXTakvZzYcE10muouw4RP9bEDJAiZLSbw3ALx1VqNW3h7xmzW5IrKos5FppPsoK3IQ29XqkLpHI7d6NEBPr";
  codes[83] = "x4LXAwBDBes50MrVVWS5lAgUC8Ue2mQfzuLUzE6FndZBVSc22wRS56lqEfTracKqFrpGVnQ9L5EePLErfqyP1XFefv5Weu20bRtx";
  codes[84] = "lJcHRIJFn90i4sO5zMH0lXzSbyPdSGKKAqSSvwl2DS7yp7ARk2cgdumlVaHdJ8l2qrpUUNK0nVwM466Wjl7S72LV5N7y3RrIIvY4";
  codes[85] = "I4yMnvXNXGbRmwhtEBtiOKcmtvZD0OZe3nnOVJuyHevHSxeFOo6VvoUcqKaJI5jy5FghvIGEmGIY0SAiB2sLMqq05TVLxtMggGdE";
  codes[86] = "xt5F5NTVcKh3NJrR6JXHD084cmo4rFVSJ9LbhbishGxeSHkQ620Am2y3iwQkoos8xUyPvTzw6bN8UWHcKHuujhCEbs2BZj073kgI";
  codes[87] = "i57vmjJktTj2lFebJfFKzAmaBTqrTDeCK5JuxMmOBxO1BI1hiz27EMFqZ0x7lLrpIyD0hRQrWaQGylxM0ks0mCVKInqoOffajiUu";
  codes[88] = "XZR9UwWrThXXZ4VmkAfqT5KaR2x6OGvYZqNwEyrsCZmHApkwlUSrSCGD9iPwAdbLIqipFh3ook2ZQczr0KnZB2gIC45AWylZaj8r";
  codes[89] = "vuCTYd7ZHEukFSJn6STH0fbKBhBKMcugyVX08uzd5TUj4AcXU4lU7MtAh3K8uhWklxCdozQcos6PMPzHwaayzSDETdslDS1Mr97M";
  codes[90] = "ZKmKS8QnpDk2j9DwqC5KBZ9fSOC6G4Y9pmCY8j1u15rZtyPbRAwDvbXdOBo0Wh9EI6vte75Z4OHIsrnnjEUowxv65S2sM0ZV3iee";
  codes[91] = "htXg2QnFdREayZCpLTwxH5IcXkHuxnMIKtq3faq1oyXKdkY8F4kgVeDSFiXTVY4nweEDGcVsDXe1n2xKK3BsPrzBHVhRBAHVWhSa";
  codes[92] = "2vuxmSF6ua3uAk8ckI3mdX1fJ0x48cLgkRPpoYA5UCHQgdIhsXLKeFIbeb0OCDidrBZVaova3n30MPOeWzGetagGGqSs9bVP9dI8";
  codes[93] = "2V5qJiqclE88y6nAUNE2eD646IwkzQeWq2w8ov9c2ai0ZCl5yzWiXKhM7jBRwfsV2MRCC2BSEQwZCB6gAnS0kuRVF5F0uNVueyIj";
  codes[94] = "FzpBPshxsMmfAXH2ml4hL0blAp345ZdnFMPvLQFBy27rLadXHZnMW3BoTSLemxMKOk3lXybpGn0WnCf8lQUYSfo5cu5M6RdJhAj0";
  codes[95] = "xGYsUXtyTVRKuRpd5ezvRsz6LMUKJT67dBscqzX31hbU9wlubcv9RF7EJJd7qlI9vpq6jMzHbyFUbwdUbnygJlB7FRAg8yoqQjFK";
  codes[96] = "K9wcduFswnzQlxdkChEgFVWw5v47nSLG6xqWmUdRdItvYPZLShytkUjfWAYcQbg14uNjzfC1c1Q9m0LehjsA7rnwTaZmKHwiqLkx";
  codes[97] = "rxU18HjU7QEnvPIE2EmESbJ7W5pdLFjkf2IcXWvnlsC8ecO0Ry2qfddncBZkqccQjTYKNpgyTwWmFK81OdPmkTdKj5DyGy8omzeS";
  codes[98] = "VddnisCrIFNn04W9m38Z0AgfejcLL1MOugooPxihfJzbRuPEn9GZSz7CljxfreVVoK9rkRIDmV9E6KrLnx6SKOeW50YrSefB6C8w";
  codes[99] = "ABu5CDFJprSS5j687QmdEPkh594oQaTFgOLhI0LEU1di84NrqTSYAG0KB7X1AGC7e3ZDW6B59LIPAj01IY3cWBpgXRbQNRVWspMd";

  //check password
  abcdef123(argv[3]);
  //print answer if password is crct
  printf("%ld\n",fedcba123(atoi(argv[1])) + fedcba123(atoi(argv[2])));
  return 0;
}
