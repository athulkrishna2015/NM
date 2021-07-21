float power(float n,float p)
{
    int i;
    float powr;
    powr=n;
    for(i=1;i<p;i++)
    {
        powr*=n;
    }
    printf("%f \n",powr);
}
