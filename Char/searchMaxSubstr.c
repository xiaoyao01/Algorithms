char * search(char *cpSource, char ch)
{
         char *cpTemp=NULL, *cpDest=NULL;
         int iTemp, iCount=0;
         while(*cpSource)
         {
                 if(*cpSource == ch)
                 {
                          iTemp = 0;
                          cpTemp = cpSource;
                          while(*cpSource == ch) 
                                   ++iTemp, ++cpSource;
                          if(iTemp > iCount) 
                                iCount = iTemp, cpDest = cpTemp;
                        if(!*cpSource) 
                            break;
                 }
                 ++cpSource;
     }
     return cpDest;
}      