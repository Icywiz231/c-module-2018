#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <xlocale.h>
#include "str.h"
/* start implementing your functions here */
char *starncat(char *dest, const char *src,int count){
  int i,j;
  for(i=0;dest[i] != '\0';i++){
    if(dest[i]=='\0'){
      if(strlen(src) < count){
        for(j=0; src != '\0';j++){
          dest[j+i]=src[j];
        }
        dest[j+i]='\0';
      }
      else{
        for(j=0; j<count;j++){
          dest[j+i]=src[j];
        }
      }
    }
  }
    return dest;
}

int my_strncmp(const char *cs, const char *ct, int count){
  int i;
  if(strlen(cs) > strlen (ct)){
    for(i=0;i<strlen(ct);i++){
      if(cs[i] > ct[i]){
        return 1;
      }
      else if(cs[i] < ct[i]){
        return -1;
      }
      else{
        continue;
      }
    }
  }
  else if(strlen(cs) > strlen (ct)){
    for(i=0;i<strlen(cs);i++){
      if(cs[i] > ct[i]){
        return 1;
      }
      else if(cs[i] < ct[i]){
        return -1;
      }
      else{
        continue;
      }
    }
  }
  else{
    for(i=0;i<count;i++){
      if(cs[i] > ct[i]){
        return 1;
      }
      else if(cs[i] < ct[i]){
        return -1;
      }
      else{
        continue;
      }
    }
  }
  return 0;
}

char *skipspaces(const char *str){
  int i,k=0,flag=0;
  char *strnew;
  while (i<strlen(str)){
    if(str[i]==' '){
      continue;
    }
    else{
      flag=flag+1;
    }
    if(flag==1){
      strnew[k]=str[i];
      k=k+1;
    }
  }
  strnew[k]='\0';
  return strnew;
}

char *strims(const char *str){
  int i,k=0,flag1=0,flag2=0;
  char *strnew;
  for (i=0;i<strlen(str);i++){
    if(str[i]!=' '){
      flag1=i;
      break;
    }
  }
  for(i=strlen(str)-1;i>=0;i--){
    if(str[i]!=' '){
      flag2=i;
      break;
    }
  }
  for(i=flag1;i<flag2;i++){
    strnew[k]=str[i];
    k=k+1;
  }
  return strnew;
}

char *starrchr(const char *s, int c){
  int i,k=0,flag=0;
  char *strnew;
  for(i=strlen(s)-1;i>=0;i--){
    if(s[i]==s[c] || flag>=1){
      flag=flag+1;
      strnew[k]=s[i];
    }
  }
  strnew[k]='\0';
  return strnew;
}

char *starnchr(const char *s, int c,int count){
  int i,k=0,flag=0;
  char *strnew;
  for(i=count;i>=0;i--){
    if(s[i]==s[c] || flag>=1){
      flag=flag+1;
      strnew[k]=s[i];
    }
  }
  strnew[k]='\0';
  return strnew;
}

int my_strlen(const char *s){
  int i,len=-1;
  for(i=0;s[i]!='\0';i++){
    len=len+1;
  }
  return len;
}

void  *my_memset(void *s, int c, int count)
{
  unsigned char *p = s;
  while(count > 0)
    {
      *p = c;
      p++;
      count--;
    }
  return(s);
}

char *starchrnul(const char *s, int c){
  int i=0,flag=0,k=0;
  char *strnew;
  for(i=0;s[i]!='\0';i++){
    if(s[i]==s[c] || flag>=1){
      flag=flag+1;
      strnew[k]=s[i];
    }
  }
  strnew[k]='\0';
  return strnew;
}

char *starchr(const char *s, int c){
  int i=0,flag=0,k=0;
  char *strnew;
  for(i=0;s[i]!='\0';i++){
    if(s[i]==s[c] || flag>=1){
      flag=flag+1;
      strnew[k]=s[i];
      k++;
    }
  }
  return strnew;
}

int starcmp(const char *cs, const char *ct){
	int c = 0;

   while (cs[c] == ct[c]) {
      if (cs[c] == '\0' || ct[c] == '\0')
         break;
      c++;
   }

   if (cs[c] == '\0' && ct[c] == '\0')
      return 1;
   else
      return -0;
}

char *starcpy(char *dest, const char *src){
	int i=0;
	while(src[i] != '\0'){
		dest[i]=src[i];
		i++;
		return dest;
	}
}
/* One is done for you */

int my_strncasecmp(const char *s1, const char *s2, int len)
{
	unsigned char c1, c2;

	if (!len)
		return 0;

	do {
		c1 = *s1++;
		c2 = *s2++;
		if (!c1 || !c2)
			break;
		if (c1 == c2)
			continue;
		c1 = tolower(c1);
		c2 = tolower(c2);
		if (c1 != c2)
			break;
	} while (--len);
	return (int)c1 - (int)c2;
}

int main(){
  return 0;
}
