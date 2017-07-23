/*******************************************************************
函数名称：BeepInit
功能描述：beep端口初始化
输入参数：无
输出参数：无
********************************************************************/
void BeepInit(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
	
	GPIO_InitStructure.GPIO_Pin = BEEP_Pin;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;   //Í¨ÓÃÍÆÃâÊä³ö
	GPIO_Init(BEEP_PORT, &GPIO_InitStructure);
	GPIO_ResetBits(BEEP_PORT,BEEP_Pin);//ÉÏµçÀ­µÍ½ûÖ¹ÃùÏì	
}

void BeepOn(void)
{
	GPIO_SetBits(BEEP_PORT,BEEP_Pin);	
}

void BeepOff(void)
{
	GPIO_ResetBits(BEEP_PORT,BEEP_Pin);
}
