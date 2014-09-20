
/**
 * [continumax description:在字符串中找出连续最长的数字串，并把这个串的长度返回，
 * 并把这个最长数字串付给其中一个函数参数outputstr所指内存。例如："abcd12345ed125ss123456789"的首地址传给intputstr后，
 * 函数将返回9，outputstr所指的值为123456789]
 * @param  outputstr
 * @param  inputstr
 * @return
 */
int continumax(char *outputstr, char *inputstr)
{
    char *in = inputstr, *out = outputstr, *temp, *final;
    int count = 0, maxlen = 0;
    while( *in != '/0' )
    {
        if( *in > 47 && *in < 58 )
        {
            for(temp = in; *in > 47 && *in < 58 ; in++ )
                count++;
        }
        else
            in++;
        if( maxlen < count )
        {
            maxlen = count;
            count = 0;
            final = temp;
        }
    }
    for(int i = 0; i < maxlen; i++)
    {
        *out = *final;
        out++;
        final++;
    }
    *out = '/0';
    return maxlen;
}