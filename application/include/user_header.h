/****************************************Copyright (c)**************************************************
**                       		     ��	��	��	ͨ	��	ѧ
**                                        ��������ѧԺ
**                                         604ʵ����
**
**
**
**--------------�ļ���Ϣ--------------------------------------------------------------------------------
**��   ��   ��: user_header.h
**��   ��   ��: 
**����޸�����: 
**��        ��: ����1.5MW˫�������鲢����������������ͷ�ļ�----201005atcpc-201007atbjtu
				�����汾��Ϣ,�궨��,��������
**              
**--------------��ʷ�汾��Ϣ----------------------------------------------------------------------------
** ������: 
** ��  ��: 
** �ա���: 
** �衡��: 
**
**--------------��ǰ�汾�޶�------------------------------------------------------------------------------
** �޸���: 
** �ա���: 
** �衡��: 
**
**------------------------------------------------------------------------------------------------------
********************************************************************************************************/
#ifndef DCDC_header_H
#define DCDC_header_H

#ifdef __cplusplus
extern "C" {
#endif

//--------------------------�궨��-----------------------------------------------
				
//-----------------------������غ궨��------------------------------------------
//--------------------------�汾��Ϣ-----------------------------------------------
#define MC_TYPE 			2010			//���Ͳ���
#define MC_REV 				210				//�����汾�ţ�dot2��
#define MC_DATE 			2010			//��������
#define MC_ID				1				//��Ʒ���
#define MC_WRKEY			999				//�������޸�����
#define MC_MYKEY			1021			//������ʹ�õ�����

//------------------------����״̬������-----------------------------------------------
//#define	ON					1				          //��
//#define	OFF					0				          //��
//#define	DEBUG_OPER			OFF			              //1=����������2009.6.24
Uint16 DEBUG_OPER;                                        //20100401at27

//------------------------���ת�ӷ������ѡ��-201005atcpc-----------------------------------------
#define	R_PHORDE			1				          //��

//********************************************************************************************//
//===================�������׼ֵ��ֵ��ÿ��ʵ�������Ҫ���ģ�=====================================
//#define NPR_IACN  473        //����������׼ֵ ���ЧֵΪ334A
//#define MPR_IACN  545        //����������׼ֵ ���ЧֵΪ385A
#define NPR_IACN  682        //����������׼ֵ 201205LVRTatZB LVRTʵ��Ĵ� 20120601night
#define MPR_IACN  682        //����������׼ֵ ���ЧֵΪ482A 201107HC
#define STA_IACN  1000       //���Ӷ������׼ֵ 
#define GRD_UN    563        //��������ѹ��ֵ690Vϵͳ
#define CHOP_IDCN 650        //dc-chopper���������ֵBJTULVRT201204

//********************************************************************************************//
 
//----------------------------ϵͳ��������------------------------------------------------

#define NPR_L       0.5e-3     //�����˲����ֵ��H��
#define MPR_L	    0.071e-3   //����dv/dt���ֵ(H)
#define	PLSPRVL     2048        //������ÿȦ��դ�� ע:��ֵ�ı䣬2.617994e-3Ҫ��,��ʼ��EQep2Regs.QPOSMAXҪ�ģ�encoder pulses per revolution cpc
/*
//�������----�״̬
#define MPR_Ls   	24.494882e-3	 	//�����Ը�	--��λH			��ʵ����ֵ��
#define MPR_Lr   	15.889556e-3	 	//ת���Ը�	--��λH			��ʵ����ֵ��
#define MPR_Lm   	19.02e-3	 	    //��ת�ӻ���--��λH
#define MPR_Rs   	0.106	     		//���ӵ���	--��λohm		��ʵ����ֵ��
#define MPR_Rr   	0.14995	    		//ת�ӵ���	--��λohm		��ʵ����ֵ��
#define SIGMA	 	0.07053314			//(1-MPR_Lm*MPR_Lm/(MPR_Ls*MPR_Lr))	
#define	STAROTRTO	1.246504       		//��ת�ӱ��
#define	POLEPAIRES	2       			//��������� 
*/
/*
//CPC�������----�״̬���㵽���Ӳ����
#define MPR_Ls   	18.154e-3	 	    //�����Ը�	--��λH
#define MPR_Lr   	18.3258e-3	 	    //ת���Ը�	--��λH	
#define MPR_Lm   	17.87e-3	 	    //��ת�ӻ���--��λH
#define MPR_Rs   	0.007747	     	//���ӵ���	--��λohm
#define MPR_Rr   	0.004175	    	//ת�ӵ���	--��λohm
#define SIGMA	 	0.040127			//(1-MPR_Lm*MPR_Lm/(MPR_Ls*MPR_Lr))	        
#define	STAROTRTO	0.5922       		//��ת�ӱ��
#define	STAROTRTO2	0.35070084       	//��ת�ӱ�ȵ�ƽ��
#define	POLEPAIRES	2       			//���������  
*/
//��������趨2010atcpc
float  	MPR_Ls;	 	    				//�����Ը�	--��λH 
float	MPR_Lr;	 	    				//ת���Ը�	--��λH	
float 	MPR_Lm;	 	    				//��ת�ӻ���--��λH
float 	MPR_Rs;	     					//���ӵ���	--��λohm
float 	MPR_Rr;	    					//ת�ӵ���	--��λohm
float 	SIGMA;							//(1-MPR_Lm*MPR_Lm/(MPR_Ls*MPR_Lr))	        
float	STAROTRTO;       				//��ת�ӱ��
float	STAROTRTO2;       				//��ת�ӱ�ȵ�ƽ��
float	POLEPAIRES;       				//���������  
///-------------���ó����궨��-------------------------//
#define	SQRT3		1.73205081			//sqrt(3)
#define	SQRT3_2		0.8660254           //sqrt(3)/2
#define	SQRT3_3		0.57735027          //sqrt(3)/3
#define	SQRT2		1.41421356			//sqrt(2)
#define	PAI			3.1415926           //Բ����
#define TWOPAI      6.2831853           //2*PAI
#define PAI_2       1.5707963			//PAI/2
#define PAI_3       1.0471975			//PAI/3
#define TWOPAI_3    2.0943951			//2*PAI/3
#define TWOPAI_12   0.523598766			//2*PAI/12
#define IRQTOTE     27.51385e-3			//ת��ϵ����-Irq*�˸�ϵ���ٳ���ѹed=ת��Te

//------------------------------��ʱʱ��-------------------------------------------------
#define	DELAY_MAIN1			5										//һ��ѭ����5ms
#define	DELAY_MAIN2			10										//����ѭ����10ms
#define	DELAY_MAIN3			20										//����ѭ����20ms
#define	DELAY_MAIN4			50										//�ļ�ѭ����50ms
#define	DELAY_MAIN5			100										//�弶ѭ����100ms
#define	DELAY_MAIN6			1000									//����ѭ����1000ms

//canopen
//#define	DELAY_CANOPENTX		13										//CANOPENTX��7ms
#define	DELAY_CANOPENTX		6										//CANOPENTX��6ms	120507
#define	DELAY_CANOPENOVER	1000									//CANOPENOVER��500ms,HEARTBEAT 2014-05-06LJD��ʱ�޸�CANopen
#define	DELAY_SCICANOPENOVER 250									//20090817
#define	DELAY_CANFAULT       10000									//CANOPENOVER���ϵ���ж�CANͨѶ����

#define DELAY_AMUX          5      	//����AD
#define DELAY_UDCWAVE		1500	//ֱ����ѹ������ʱʱ��

#define	DELAY_POWERON		5000  	//�ϵ�ʱ��
#define	DELAY_PWMOUT		1000   	//ϵͳ��������־��λ�����巢��������־��λ��ʱ(ms)
#define	DELAY_NPRSTDBY		1000   	//NPR����---���ӹ�����������˸(ms)
#define	DELAY_NPRRUN		100	   	//NPR����---���ӹ����ƿ�����˸(ms)
#define	DELAY_MPRSTDBY		1000   	//MPR����---���ӹ�����������˸(ms)
#define	DELAY_MPRRUN		100	   	//MPR����---���ӹ����ƿ�����˸(ms) 
#define	DELAY_FREQ			2000	   	//Ƶ��ʧ��������ʱ
#define	DELAY_CBFREQ		1000	//�����Ϸ����պϵ��ж���Ƶ���ϵ���ʱ��ms��

#define	DELAY_FREQ2			200	   	//Ƶ��ʧ��������ʱ
#define	DELAY_OTSER			60000  	//��ʱ������ʱ(ms)
#define	DELAY_SCISPACE		10	   	//ͨѶ���յ����͵ļ��ʱ��(ms)
#define	DELAY_SCIOVER		5000	//ͨѶ����/���ͳ�ʱʱ(ms)!!!!���Խ�����޸�20100125//have corected
//-----Protection-------
#define	DELAY_ESTOP  		6					//
#define	DELAY_CBTP		    6					//
#define DELAY_SWITCHDETECT	50		//�������⶯�����ϼ����ʱ10ms	110818 
#define DELAY_DETECT		2000	//�������⶯������л���ʱ1s	110818
#define DELAY_EXFAULT       500 
#define DELAY_CBERROR       1000     //0.5s		110818 20110829HC
#define DELAY_MAINKERROR    1000     //0.5s		110818
#define DELAY_MAINFERROR    1000     //0.5s		110818
#define DELAY_STACERROR     1000     //0.5s		110818
#define DELAY_PREERROR      15000    //15s
#define DELAY_PGOVLOAD      10000    //10s
#define DELAY_QGOVLOAD      10000    //10s
#define DELAY_CBRESET       500    	 //0.5s
#define DELAY_SPEEDOUT      50       //50ms 20091022atzy ����fastshutdown
#define DELAY_UACLV1        10000     //10s   20091027atzy
#define	DELAY_GFAULT		3000	//���������ƽ�⵽�ӵع�����ʱ(ms)
#define DELAY_PHORDE        12000     //12s   201005atcpc
#define DELAY_ENCOFAULT     150     //150ms   201005atcpc

#define	DELAY_NPRTLOV		60000	//�����г���
#define DELAY_MPRTLOV		60000	//�����г���
#define	DELAY_NSKIPTOV		10		//����SKIIP���� systest
#define DELAY_MSKIPTOV		10		//����SKIIP���� systest

#define	DELAY_EE		    20					//eeprom�ӳ�ʱ��

#define	DELAY_ISTEADY0	    1000	 //RunCtrl����ͣ��������ʱ1s
#define	DELAY_MPRSTEADY0    50     //RunCtrl����ͣ��������ʱ0.05s 
#define	DELAY_SENSZFSTDY    60000    //RunCtrl����ͣ����ʱ60s

//sysctl_start
#define	DELAY_STEADYFB	    2000	 //������������⵽Vdc�ȶ���1100V�����������������ʱ 2s
#define	DELAY_PRECOK        8000	 //����������Ԥ���ʱ�� 8s
#define	DELAY_SERSTOP		2000	 //���ع����£�����������ָ��󵽷����϶��ӽӴ��������Ӵ�������ʱ 2s 
#define	DELAY_ERRSTOP	    2000	 //���յ�ϵͳͣ��ָ�����ʱ�����Ӵ��� 2s
#define	DELAY_EPWMSTOP	    500	 //����������һ����Ϸ��������ʱ�������ٶϽӴ��� 500ms  20110829
#define	DELAY_CBON	    	1000	 //�����������պ�����Ƿѹ�������Ϻ�բ����ʱ���� 1s 
#define	DELAY_SYSOFF	    2000	 //���ͣ��������ת��ָ�����ͣ������ʱ2s��ͣ��������־	20120321
//sysctl_end  

#define	DELAY_RESET	        1000  	 //ϵͳ��λ��ʱ����ֹ����� 2s
#define	DELAY_CLOSTACMD	    1000  	 //�����϶��ӽӴ�������ֹ����� 1s
#define	DELAY_NPRCMD	    1000  	 //��λ������NPR�����壬��ֹ����� 1s
#define	DELAY_MPRCMD	    1000  	 //��λ������MPR�����壬��ֹ����� 1s
#define	DELAY_EIN	    	1000  	 //�λ���������ϣ���ֹ����� 1s
#define	DELAY_SYSRUN	    1000  	 //��λ������ϵͳ����/������飬��ֹ���� 1s
#define	DELAY_PREC	     	1000  	 //��λ������Ԥ��磬��ֹ����� 1s

#define	DELAY_QCAPSPDIN     120    	//ת���ٶȲ�����120ms   20090817
#define	DELAY_QCAPDISTURB   100    	//����10�μ��ת���ٶȲ����������� 100ms  20090817
#define	DELAY_QEPCNTOK      1000    //����1sδ����������� 1s
#define	DELAY_QEPZDISTURB   1000    //����1s����Z�ź���ǰ���������Ŵ���  1s

#define	DELAY_OCSEIN1     	250    	//20090817
#define	DELAY_OCSEIN2   	250    	//20090817
#define	DELAY_OCSSYSRUN1    250    	//20090817
#define	DELAY_OCSSYSRUN2   	250    	//20090817
#define	DELAY_MC_ACK		500  	 //500ms MagnetCurve2013-12-13

#define	DELAY_DATASAVE   	1800     //���Ϸ�������ʱ0.5s��ֹͣ�洢20100203atbjtu
//LVRT
#define	DELAY_SCRIZERO	    15  	 //�����ʱ0.5�����ת������ 100ms/10Hz//201007BJTULVRT
#define	DELAY_MPWMSTOP	    0  	 	 //0ms
#define	DELAY_SCRIZERO2	    2  	 	 //2ms 20121103
#define	DELAY_MPWMRESTART	50  	 //50ms//201007BJTULVRT
#define	DELAYMPWM			0  	 	 //5ms
#define	DELAY_NPWMRESTART	50  	 //50ms//201007BJTULVRT
#define	DELAY_LVSTATE		2  	 	 //2ms
#define	DELAY_LVRCV			10  	 //40ms
#define	DELAY_LV_T1			625  	 //625ms
#define	DELAY_LV_T2			3000  	 //3000ms
#define	DELAY_LV_TEST		1000  	 //1000ms
#define	DELAY_SCRONDELAY	2000  	 //2s
#define	DELAY_LVFAULT1		200  	 //200ms
#define	DELAY_LVFAULT2		100  	 //100ms



//---------20121103atsp-----------
#define	DELAY_LVQWORKING	100  	 //100ms 20121103
#define	DELAY_PHICON		50  	 //50ms 
#define	DELAY_LVTEST2		1000  	 //1s 2013-12-6��Ϊ1s
#define	DELAY_LVUBALNCE		30  	 //30ms 201011LVRT
#define	DELAY_LVUTLV		500  	 //500ms 
#define	DELAY_LVMIDVAR		20  	 //20ms 

#define	DELAY_FREQRECV		10  	 //10ms 201011PLL
#define DELAY_IDCOV			300		//�ӳ�10ms���chopper����	201205LVRTatZB20120531
#define DELAY_IDCOVDELAY	1000	//�ӳ�1s���chopper����	BJTULVRT201204

#define	DELAY_VDSCRON		3		//3ms
#define	DELAY_VDSCROFF		2		//7ms

#define	DELAY_CHOPPER		100  	 //100ms 2013-12-6ZZJ  

//---------------------------���ϱ����ز�ֵ-----------------------------------------------
#define	SC_IAC_HW			2			//������������ز�(��׼�����İٷ�ֵ)
#define	SC_UDC_HW			20			//��ѹ�����ز�(V)
#define	SC_UAC_HW			20			//��ѹ�����ز�(V)
#define	SC_MSPD_HW			30			//ת�ٱ����ز�(V) r/min
#define	SC_POWOROV_HW	    0	    	//���ʹ��ر����ز�(W) 0kW
#define	et_gate	    		50000	    //���ر�������

//-----------------------------CANOPENͨ�ź궨��----------------------------------------------
//#define	SCICANOPENRXNUM		10										//CANOPENRX���ݰ���С
//#define	SCICANOPENTXNUM		18										//CANOPENTX���ݰ���С
#define CANOPENCOM_HEAD		0x7E									//CANOPEN��ͷ
#define	SCICANOPENRXNUM		14										//CANOPENRX���ݰ���С120507
#define	SCICANOPENTXNUM		22										//CANOPENTX���ݰ���С120507
#define	SCICANOPENREADNUM	7										//CANOPENRD��ȡָ�����ݰ���С120507
//-----------------------------CANOPENͨ�ź궨��NORMAL----------------------------------------------
#define CAN_TEN  	  10000     //����ָ��ת�ػ�׼ֵ (��ǣ:1800r/minʱP=1560kW,Te=P*60/(n*2*pie)=8276 NM )
#define CAN_ANGLEN     90       //����ָ���޹������ǶȻ�׼ֵ 
#define CAN_SPEED     1500      //����ָ��ת�ٻ�׼ֵ 
#define CAN_TEMP      100       //����ָ���¶Ȼ�׼ֵ 

//-----------------------------485ͨѶ----------------------------------------------
#define	SCI485NUM_RX		8										//485���ݰ���Сmodbus

//#define UPSTART			    0x0064									//�ָ�����������У����
//#define SYSRESUME			0x0067									//�ָ�����������У����

//��λ����������
#define COM_RDDO			0x0001									//��ȡ������(��ȡ��λ��EEPROM�еĹ�����ֵд�뵽��λ��EEPROM��)
#define COM_RDAO			0x0003									//��ȡ������(��ȡ��λ��EEPROM�еĹ�����ֵд�뵽��λ��EEPROM��)
#define COM_WRDO			0x0005									//�޸Ĺ�����(�޸���λ��RAM�еĹ�����ֵ)
#define COM_WRAO			0x0006									//�޸Ĺ�����(�޸���λ��RAM�еĹ�����ֵ)
#define COM_RDRAM			0x0046									//��ȡexRAM������(20100203atbjtu)

//------------------------------CANOPEN-------------------------------------------------------------
//CANOPEN��λ��״̬��
#define COM_EIN			    0x0001									//BIT0
#define COM_NPREIN			0x0002									//BIT1
#define COM_SYSRUN			0x0004									//BIT2
#define COM_PGMODE			0x0010									//BIT4
#define COM_QGMODE			0x0020									//BIT5
#define COM_OCSRESET		0x0080									//BIT7
#define COM_HEARTBEAT1		0x8000									//BIT15
//CANOPEN������λ���ı�����״̬��1
#define COM_NPRREADY	    0x0001									//BIT0
#define COM_NPRON			0x0002									//BIT1
#define COM_READYGENERATION	0x0004									//BIT2
#define COM_FAILURE			0x0008									//BIT3
#define COM_SPEEDINRANGE	0x0010									//BIT4
#define COM_FAILUREA		0x0020									//BIT5
#define COM_FAILUREB		0x0040									//BIT6
#define COM_TOOCOLD		    0x0080									//BIT7
#define COM_PLIM	        0x0100									//BIT8
#define COM_QLIM			0x0200									//BIT9
#define COM_GRIDFAILURE 	0x0400									//BIT10
#define COM_CROWBAR			0x0800									//BIT11
#define COM_VLIM        	0x1000									//BIT12
#define COM_HEARTBEAT2		0x8000									//BIT15

#define COM_NPRREADY_NOT	    0xFFFE								//BIT0
#define COM_NPRON_NOT			0xFFFD								//BIT1
#define COM_READYGENERATION_NOT	0xFFFB								//BIT2
#define COM_FAILURE_NOT			0xFFF7								//BIT3
#define COM_SPEEDINRANGE_NOT	0xFFEF								//BIT4
#define COM_FAILUREA_NOT		0xFFDF								//BIT5
#define COM_FAILUREB_NOT		0xFFBF								//BIT6
#define COM_TOOCOLD_NOT		    0xFF7F								//BIT7
#define COM_PLIM_NOT	        0xFEFF								//BIT8
#define COM_QLIM_NOT			0xFDFF								//BIT9
#define COM_GRIDFAILURE_NOT 	0xFBFF								//BIT10
#define COM_CROWBAR_NOT			0xF7FF								//BIT11
#define COM_VLIM_NOT        	0xEFFF								//BIT12
#define COM_HEARTBEAT2_NOT		0x7FFF								//BIT15
//CANOPEN������λ���ı�����״̬��2
#define COM_ILIM			0x0001									//BIT0
#define COM_HEATSINKT		0x0002									//BIT1
#define COM_ESTOP			0x0004									//BIT2
#define COM_CBTRIP			0x0010									//BIT4
#define COM_POWLIM			0x0040									//BIT6
#define COM_VOLDIP			0x0100									//BIT8
#define COM_CBCLOSED		0x8000									//BIT15	 20090815

#define COM_ILIM_NOT		0xFFFE									//BIT0
#define COM_HEATSINKT_NOT	0xFFFD									//BIT1
#define COM_ESTOP_NOT		0xFFFB									//BIT2
#define COM_CBTRIP_NOT		0xFFEF									//BIT4
#define COM_POWLIM_NOT		0xFFBF									//BIT6
#define COM_VOLDIP_NOT	    0xFEFF									//BIT8
#define COM_CBCLOSED_NOT	0x7FFF									//BIT15 20090815

//-------------------------AD��DAת�������ݶ�ȡ�Ŀ���-----------------------------------------
#define	AD8364_CONVERT		1										//8364��ʼת��
//#define	AD1544_CONVERT		2										//1544��ʼת��
//#define	DA7614_CONVERT		4										//7614��ʼת��
//ad
#define AD_ASTART		    ((Uint16 *)0x100000)						//Ƭ��AD����ݶ�ȡ�׵�ַ
#define AD_BSTART		    ((Uint16 *)0x110000)						//Ƭ��AD�����ݶ�ȡ�׵�ַ
#define AD_CSTART		    ((Uint16 *)0x120000)						//Ƭ��AD�����ݶ�ȡ�׵�ַ
#define AD_DA_CTRL		    ((Uint16 *)0x130000)						//Ƭ��AD,DA�Ŀ����ֽڵ�ַ
//da
#define DA_ADD0				((Uint16 *)0x1B0000)						//�����ַ0
#define DA_ADD1				((Uint16 *)0x1B0001)						//�����ַ1
#define DA_ADD2				((Uint16 *)0x1B0002)						//�����ַ2
#define DA_ADD3				((Uint16 *)0x1B0003)						//�����ַ3

//External RAM 20091109atzy
#define BANK_RAMSTART		((Uint16 *)0x200000)						//Ƭ��RAM�׵�ַXINTF zone 7
#define BANK_RAMEND			((Uint16 *)0x21E848)						//Ƭ��RAMβ��ַXINTF zone 7 end at 125000
#define ERROR_RAMSTART		((Uint16 *)0x21FBD0)						//Ƭ��RAM�׵�ַXINTF zone 7 start at 130000
#define ERROR_RAMEND		((Uint16 *)0x23E418)						//Ƭ��RAMβ��ַXINTF zone 7 end at 255000
#define RAM_BIAS			5000										//=2s/(0.4ms/point)=5000points/variable
Uint16  BANK_RAMDATA_POS;						    					//�洢�����Ĵ洢��λ��[0,4999]
Uint16  ERROR_RAMDATA_POS;						    					//�洢�����Ĵ洢��λ��[0,4999]
#define RAM_SEGMENT			1000											//ÿ������ÿ�η��ͷֶδ������


//----------------------------���������ַ����--------------------------------------------
#define IN1_ADDR			((Uint16 *)0x140000)	//�����ַ1
#define IN2_ADDR			((Uint16 *)0x150000)	//�����ַ2
#define IN3_ADDR			((Uint16 *)0x160000)	//�����ַ3
#define IN4_ADDR			((Uint16 *)0x170000)	//�����ַ4

#define OUT1_ADDR			((Uint16 *)0x180000)	//�����ַ2
#define OUT2_ADDR			((Uint16 *)0x190000)	//�����ַ3
#define OUT3_ADDR			((Uint16 *)0x1A0000)	//�����ַ3
#define OUT4_ADDR			((Uint16 *)0x1C0000)	//�����ַ4,������AD�й�

//--------------------------------SPIͨѶ�궨��-------------------------------------------
#define	SPINUM				4										//SPI�ڷ���/����������

//-----------------------------------ʱ��--------------------------------------------------
#define	HSPCLK				75      		//���ٻ�׼ʱ��Ƶ��(Hz)
#define	LSPCLK				37500000		//���ٻ�׼ʱ��Ƶ��(Hz)

//--------------------------------��־λ��-----------------------------------------------
//flag[0]��ʾ���趨��
#define	SL_DISPLAY0			0x00			//LED��ʾ0
#define	SL_DISPLAY1			0x01			//LED��ʾ1
#define	SL_DISPLAY2			0x02			//LED��ʾ2
#define	SL_DISPLAY3			0x03			//LED��ʾ3
#define	SL_DISPLAY4			0x04			//LED��ʾ4
#define	SL_DISPLAY5			0x05			//LED��ʾ5
#define	SL_DISPLAY6			0x06			//LED��ʾ6
#define	SL_DISPLAY7			0x07			//LED��ʾ7
#define SL_RAMERRORSAVE     0x08            //=1�ⲿRAM���ϲ��������־
#define SL_RAMBANKSAVE      0x09            //=1�ⲿRAM���ϲ��������־
#define	SL_TRIG_ERRDSAVE    0x0A      		//�����ⲿRAM����ת��20091109atzy
#define	SL_PC_ERRDATACLR    0x0B      		//�����ⲿRAM�����ͷ� PCmodbus20100305
#define	SL_PC_ERRDATASAVE   0x0C      		//PC�����ⲿRAM�������� PCmodbus20100308
#define SL_PC_BANKDATASAVE  0x0D            //PCָ���ⲿRAM��ʾ�������� PCmodbus20100308
#define	SL_MC_OK   			0x0E      		//��������MagnetCurve2013-12-13
#define SL_MC_FAIL          0x0F    		//��������MagnetCurve2013-12-13

//#define	SL_STA_PHORDE   	0x0E      		//TEST
//#define SL_ROT_PHORDE  		0x0F            //
  
//flag[1]����ͨ����ر�;eeprom��ر�
#define SL_TX		    	0x10			//1=��ʾsci���ڷ���
#define SL_RX		    	0x11			//1=��ʾsci���������ʱ��
#define SL_RESUME    		0x12			//1=�ָ���������������
#define SL_HEADOK			0x13			//1=��֡���ݱ�ͷ��ȷ
#define SL_SETRTIMER		0x14			//1=��ҪУ��ʵʱʱ��
#define SL_EE_NOACK			0x15
#define	SL_EE_FAIL			0x16			//=1eepromд�����
#define SL_CODEOK			0x17			//=1������У�����
#define SL_EEASK_INI		0x18			//=��λ��Ҫ��eeprom�ָ���������
#define SL_EEASK_MCODE		0x19			//=1�����޸Ĺ���������
#define SL_EEASK_ERRSAVE	0x1A			//=1���ڱ��������Ϣ����
#define SL_EEBUSY_INI		0x1B			//=1�ָ���������������
#define SL_EEBUSY_MCODE		0x1C			//=1�޸Ĺ����������
#define SL_EEBUSY_ERRSAVE	0x1D			//=1���������Ϣ������ 
#define SL_TXLONGDATA		0x1E			//=1���ͳ����ݽ����� 

//#define SL_PHO_FH			0x1F			//=1TEST
#define SL_CANOPENTX_FLAG	0x1F			//120507
	
//flag[2]QEP��ر�־λ �����ϱ�־λ
#define SL_QEPPCO			0x20			//=1 QEP�����������
#define SL_QCAPDISTURB		0x21			//=1 QEP�����ܵ����Ź��� ����10�ζ�ȡ��������ȷ��Χ�� 20090804cpc
#define	SL_QEPZDISTRUB	    0x22     	    //=1 QEP Z�ź��ܵ����ţ�����1s�ڴ���ͱ�����   20090804cpc
#define SL_ENCODFAULT		0x23			//=1 QEP����(����������)
#define	SL_QEPPCDE          0x24      		//������ת��ı����,A��B�ź���ʧ
#define	SL_QCAPSPDIN        0x25      		//QEP��CAP��·�ܹ���ȷ��� qcap speed in 
#define	SL_SPEED_HIGH       0x26      		//��ת��������QCLK128��Ƶ����ת�ٲ���8��Ƶ 
//flag[2]�Ӵ������ϱ�־λ
#define SL_ERROR_CB        	0x27        	//=1�����й��� 
#define SL_ERROR_MAINF   	0x28         	//=1���˲�������
#define SL_ERROR_MAINK     	0x29         	//=1���Ӵ�������
#define SL_ERROR_STAC		0x2A         	//=1���ӽӴ�������
#define SL_ERROR_PRE       	0x2B         	//=1Ԥ������ 
#define SL_MSPOUT        	0x2C         	//=1ת�ٳ�����Χ���� 
#define SL_SYNFAIL        	0x2D         	//=1����ͬ������ʧ�ܹ��� 
#define SL_STEADYGV			0x2E			//=1Vdc�����ȶ�
#define SL_STEADYFB			0x2F			//=1Vdc������ѹ�ȶ�

//flag[3]״̬��
#define SL_POWERON			0x30			//=1ϵͳ�ϵ����
#define SL_WARNING			0x31			//=1����
#define SL_OFFCB			0x32			//=1������
//#define SL_SOFT				0x33			//=1����ֹͣ
#define SL_DL_RESET			0x33			//=1��ʱ������λ
#define SL_SHUT				0x34			//=1����ֹͣ
#define SL_NRCVR			0x35			//=1���ϲ��ָܻ�
#define SL_DRCVR			0x36			//=1������ʱ�ָ�
#define SL_IRCVR			0x37			//=1���������ָ�
#define SL_CNT				0x38			//=1������ϴ���
#define SL_OTSER			0x39			//=1���ϳ�ʱ����
#define SL_SAVE				0x3A			//=1������Ҫ�洢
#define	SL_NO_RESET        	0x3B      		//=1��ֹ��λ��־λ 
#define SL_IUBLNCE1     	0x3C			//1=������©��������
#define SL_IUBLNCE2      	0x3D			//1=����©��������
#define SL_GFAULT1			0x3E			//1=������ӵع���	
#define SL_GFAULT2		    0x3F			//1=����ӵع���	

//flag[4]���ϱ�1
#define SL_ERROR			0x40			//=1ϵͳ����
#define SL_ERRSTOP			0x41			//=1ϵͳһ�����
#define	SL_SERIESTOP        0x42      		//=1ϵͳ���ع��� 
#define	SL_PDPINTA			0x43			//=1������������A
#define	SL_PDPINTB			0x44			//=1������������B
#define	SL_UDCWAVE			0x45			//=1�м��ѹ���ȶ�������580V��620V
#define SL_HIA1			    0x46			//=1���������A��Ӳ������
#define SL_HIB1			    0x47			//=1���������B��Ӳ������
#define SL_HIC1			    0x48			//=1���������C��Ӳ������
#define SL_HIA2		 	   	0x49			//=1����������A��Ӳ������
#define SL_HIB2		   	 	0x4A			//=1����������B��Ӳ������
#define SL_HIC2		   	 	0x4B			//=1����������C��Ӳ������
#define SL_SIAC1		    0x4C			//=1�����������������
#define SL_SIAC2		    0x4D			//=1������������������
#define SL_SUDCOV			0x4E			//=1�м�ֱ������ѹ
#define SL_UACLV2			0x4F			//=1��ѹ˲��������LVRT 201007BJTULVRT

//flag[5]���ϱ�2
#define SL_UACOV1			0x50			//=1��ѹ������ѹ
#define SL_UACLV1			0x51			//=1��ѹ����Ƿѹ
#define SL_PGOV				0x52			//=1�������й����ʹ���
#define SL_QGOV				0x53			//=1�������޹����ʹ���
#define	SL_GRDFQE			0x54			//=1����Ƶ�ʼ������
#define SL_FE1			    0x55			//=1����Ƶ�ʹ���
#define	SL_PDPASERIES		0x56			//=1�������ع���
#define SL_PDPBSERIES		0x57			//=1��������ع���
#define SL_HUDCOV			0x58			//=1Ӳ����ѹ����
#define SL_HIACOV1			0x59			//=1���ཻ��Ӳ��������������
#define SL_HIACOV2			0x5A			//=1����ཻ��Ӳ��������������
#define SL_CBTRIP 			0x5B			//=1�����ѿۻ������ضϿ����Ϲ���
#define	SL_EXFAIL		    0x5C			//=1�������ⲿӲ������
#define	SL_ESTOP			0x5D			//=1�ⲿ����ͣ������
#define SL_PHORDE		    0x5F            //=1��������

//flag[6]���з�ʽ
#define SL_ENPCOPER			0x60			//����ģʽ��1=PC���ƣ�0=CAN����			modbus2010
#define SL_OPERATION		0x61			//����ģʽ��1=���൥������ 0=���������� modbus2010
#define	SL_NPR_START		0x62			//�������������ָ�� 1=����
#define	SL_MPR_START		0x63			//�������������ָ�� 1=����
#define	SL_NPR_RUN			0x64			//=1�����������������
#define	SL_MPR_RUN			0x65			//=1���������������� 
#define	SL_NPR_RUNING		0x66			//=1������������ڹ��
#define	SL_MPR_RUNING		0x67			//=1������������ڹ���
#define SL_NPR_PWMOUT       0x68            //=1���������Ѿ�ʹ�ܱ�־λ,���ұ�֤Enepwmio_NPR()ֻ������һ��
#define SL_MPR_PWMOUT       0x69            //=1���������Ѿ�ʹ�ܱ�־λ,���ұ�֤Enepwmio_MPR()ֻ������һ��
#define SL_RUN				0x6A			//=1ϵͳ���
#define SL_CONFIGPWM		0x6B			//=1PWM����������ɱ�־λ,�ConfigPwm()ֻ������һ��
#define SL_FAN_WORK         0x6C			//=1Ҫ���ʷ��ȿ�ʼ����
#define SL_CHARGEOK			0x6D			//=1Ԥ������
//#define SL_SENSZFSTDY       0x6E            //=1��������Ư�˲����� 
#define SL_UNBALANCE       	0x6E            //=1������ƽ���־λ 20121103
#define SL_SPEED_IN_RANGE	0x6F			//=1ת���ڷ�Χ����
								
//flag[7]�����1,IO���   0x180000          //���������=1 ���DC24V
#define _OUT1_DATA			flag[7]	
#define CL_CBLVC            0x70         	//=0���϶Ͽ�ָ��P5.5
#define CL_CBON   			0x71			//=1Ҫ�������P5.6
#define CL_PRE   			0x72			//=1Ҫ���Ԥ���P5.7
#define	CL_MAINK    		0x73			//=1Ҫ��Ͽ������Ӵ������˲�����P5.8
#define CL_STATORK		    0x74			//=1Ҫ��Ͽ��ƶ��ӽӴ��P5.9
#define CL_CBFCON           0x75			//=1Ҫ������Ƿѹ���պϣ�0=����Ƿѹ���Ͽ�P5.10
#define CL_FANWORK	        0x76			//=1Ҫ���ʷ�������P5.11
//#define CL_SAVEC	        0x77			//=1����,��ȫ���պ�P5.12 20110829
#define CL_ZKLVRT	        0x77			//=1������ѹ���䣬��������24V�ź�20121107

//flag[8]�����2         0x190000           //�̵��������=1 ���AC220V
#define _OUT2_DATA			flag[8]				
#define CL_RELAY8      		0x80			//����
#define CL_CHOPTEST        	0x81			//ն������ 2013-12-6ZZJ 
#define SL_WATCHDOG			0x82            //DSP�������Ź� 20100401at27
//#define SL_SWITCHDETECT    	0x84         	//=1�����⶯�� 		110818
#define CL_CHOPEN			0x83			//enable chopper

//--------���±�λ��������ڲ���־--------------------------------------------
#define SL_ERRSTOP_S1		0x84            //һ����ϲ����־λ20110829
#define SL_SWITCHDETECT    	0x85         	//=1�����⶯�� 		110818
#define SL_QEPPHE    		0x86         	//=1�����ת��AB���ӹ��� 20110829HC
#define SL_SYSOFF    		0x87         	//=1�������ͣ��ʱת�ٹ��ͣ����ٽ�������ת��ָ�����ͣ��	20120321
#define SL_IDCOV    		0x88         	//=1�м�ֱ��ն���������������ж�-BJTULVRT201204
#define SL_LV_SYNCON    	0x89         	//=1���ද̬PI���Ʊ�־λ-BJTULVRT201204
#define SL_LV_PHICON    	0x8A         	//=1������Դ����˥�����Ʊ�־λ-BJTULVRT201204
#define SL_CHOPPEREN		0x8B			//=1ն����ʹ��		20120228	BJTULVRT201204
#define SL_LV_SCRKEEPON		0x8C			//=1crowbarһֱ��ͨ��־20120602
#define SL_LV_VDSCRON		0x8D			//=1��ѹ���䴥��SCR 20121203
#define SL_LV_SCROFF1		0x8E			//=1 35%���Գƹ�SCR 20121210
#define SL_LV_SCROFF2		0x8F			//=1 50%���Գƹ�SCR 20121210

//flag[15]�����4         0x1A0000          //����AD��ַ���
#define _OUT3_DATA			flag[15]									
#define SL_PHASEA			0xF0		     //					
#define SL_PHASEB			0xF1             //
 
Uint16   _OUT4_DATA;		//�ñ�־λ���ø�Ϊ�궨��20130222

//flag[11]�����4         0x1C0000          //ADַ���
/*#define _OUT4_DATA			flag[11]									
#define SL_LSADA0			0xB0		     //A0						
#define SL_LSADA1			0xB1             //A1
#define SL_LSADA2			0xB2             //A2
#define SL_LSADA3			0xB3	         //A3							
*/
//flag[11]LVRT��ر�־λ	20130222
#define SL_LV_RECMSTOP			0xB0			//=1�ָ�ʱ������������	20130124
#define SL_LV_ZDNSTOP			0xB1			//=1����ʱ����������������	20130202
//#define SL_LV_XNZKKZ			0xB2			//=1�����迹�����ڼ�	20130202
#define SL_LV_STRICTLV			0xB2			//=1�ϸ�LV����	20130222
#define SL_LV_RECNSTOP			0xB3			//=1�ָ�ʱ������������	20130206
#define SL_LV_ZDMSTOP			0xB4			//=1����ʱ�̻�������������	20130221
#define SL_LV_SCRDONE			0xB5			//=1 Ͷ��scrһ��20130221
#define SL_LV_CLRERRAM			0xB6			//=1 ���LV�󴥷�����20130306
#define SL_CANOPENHEAD			0xB7			//=1 �յ���ͷ	20130801
#define SL_ENCODEPOS_OK			0xB8			//=1������λ�ü�����	20130801
#define SL_ECPOSSEARCH			0xB9			//=1������λ��У��� 	20130801


//flag[9]�����12
#define _IN12_DATA			flag[9]			//���������״̬����
//---------------------0x140000----------------------------------------------------------------------------	
#define SL_IN1_CBSTS 			0x90			//=1 ���ϴ��ڱպ�״̬��P4.1
#define SL_IN1_CBRESET			0x91			//=1 ��⵽���Ҫ������RESETָ��(��Ҫ��ʱһ��ʱ�����ܺ�����)��P4.2
#define SL_IN1_STATORK			0x92			//=1 ���ӽӴ������ں�բ̬��P4.3  
#define SL_IN1_MIANK   			0x93			//=1 ���Ӵ������ں�բ״���P4.4
#define SL_IN1_MIANFILTER		0x94			//=1 ���˲������ں�բ״̬��P4.5
#define SL_IN1_EXFAULTOK	   	0x95			//=1 �ⲿ������������0=���Ϸ���	P4.6��		
#define SL_IN1_MIANFAN	    	0x96	        //=1 ����������0=������   P4.7 
#define SL_IN1_EXESTOP	        0x97			//=1 �ⲿ��ͣ����  ���������Ͻ���ͣ���ť����=1 P4.8	090815				
//---------------------0x150000---------------------------------------------------------------------------	
#define SL_IN2_IOVA1			0x98			//=1 ����A�� SKiiP����(�������߳���)
#define SL_IN2_IOVB1			0x99			//=1 ����B�� SKiiP����(�������߳���)
#define SL_IN2_IOVC1			0x9A			//=1 ����C SKiiP����(�������߳���)					
#define SL_IN2_TAOV			    0x9B			//=1 ����SKiiP���¹��� 
#define SL_IN2_IOVA2			0x9C			//=1 �����A��SKiiP����(�������߳��£�
#define SL_IN2_IOVB2			0x9D			//=1 �����B�� SKiiP����(�������߳���)
#define SL_IN2_IOVC2			0x9E			//=1 �����C�� SKiiP����(�����߳���)
#define SL_IN2_TBOV				0x9F			//=1 �����SKiiP���¹���


//flag[10]�����34      0x160000
#define _IN34_DATA			flag[10]			//���ư�Ӳ���������Ϸ���
//-----------------------------------------------------------------------------------------------				
#define SL_IN3_VDCOV			0xA0			//=1 ֱ����ѹ��ѹ
#define SL_IN3_NPRIOV			0xA1			//=1 ���ཻ��Ӳ��������������
#define SL_IN3_MPRIOV			0xA2			//=1 ����ཻ��Ӳ��������������

#define SL_IN3_CBTRIP		    0xA3			//=1 ���Ϲ����ѿ۹���  P4.9   20090816
//#define SL_IN3_OCS_NPRSTART		0xA4			//=1 ��λ����������������  �������źţ��糡û��
//#define SL_IN3_OCS_MPRSTART		0xA5			//=1 ��λ����������������  �������źţ��糡û��
#define SL_IN3_IOVDC			0xA6			//=1 dc-link chopper errror 20120228atbjtu	BJTULVRT201204
//ע�⣺�ø�8λʱ�����븳ֵ������20130222atzb

//flag[12]����ͨѶ��PCָ���־λ
#define SL_OCS_NPREIN       0xC0            //=1����Ҫ����������൥���޹���������				
#define SL_OCS_EIN          0xC1            //=1���ط�������ϵͳ�����ź�  bit0 ������·��
#define SL_OCS_SYSRUN    	0xC2			//=1���ط������ı����������ź�  bit2 ��ʼԤ���ֱ�����ӽӴ����պ�
#define SL_CBCLOSED    	    0xC3			//=1�������أ������Ѿ��պ�
#define SL_MPR_SYNOK        0xC4            //=1����ͬ��������ɱ�־λ				
#define SL_PGOV_COM         0xC5            //=1�й����ʳ������ƣ�֪ͨ���� ����10s��������ᱨ����			
#define SL_QGOV_COM         0xC6            //=1�޹����ʳ������ƣ�֪ͨ���� ����10s��������ᱨ����				
#define SL_OCS_PREC			0xC7			//=1PC����Ԥ���ָ��
#define SL_OCS_NPRSTART     0xC8            //=1PC����Ҫ��NPR������        
#define SL_OCS_MPRSTART     0xC9            //=1PC����Ҫ��MPR������
#define SL_OCS_RESET        0xCA            //=1���ط������Ĺ��ϸ�λ�ź�  
#define SL_OCS_OPENSTAC		0xCB			//=1��ֹ�պ϶��ӽӴ��� 1=��ֹ�պ�
#define SL_PCOCS_CBOFF		0xCC			//=1PC�����ֶ��Ͽ�CB 1=�Ͽ� 2010atcpc
//canopen
#define SL_CANOPENOVER		0xCD			//=1 CANOPEN FAULT
#define SL_CANOPENHEADOK	0xCE			//=1 SL_CANOPENHEADOK
#define SL_CANOPENTX		0xCF			//=1 SL_CANOPENOVER 


//flag[13]
//LVRT��־λ
#define SL_LV_QWORKING      0xD0       		    
#define SL_LV_MSTOP         0xD1       		    
#define SL_LV_NSTOP         0xD2
#define SL_LV_SCRON         0xD3
#define SL_LV_SCRRUNING     0xD4
#define SL_LV_SCRIZERO      0xD5
#define SL_LV_MPWMOUT		0xD6		
#define SL_LV_STATE		    0xD7		
#define SL_LV_TEST         	0xD8		
//ϵͳ�߼����� ��־λ
#define SL_SYN_S3         	0xD9			//SYN�����־λ
#define SL_SYN_S2         	0xDA			//SYN�����־λ
#define SL_SYN_S1     		0xDB			//SYN�����־λ	
#define SL_NORSTOP_FH      	0xDC			//NORSTOP�����־λ	
#define SL_NORSTOP_S2		0xDD			//NORSTOP�����־λ	
#define SL_NORSTOP_S1		0xDE			//NORSTOP�����־λ	
#define SL_ERRSTOP_FH		0xDF			//ERRSTOP�����־λ		

//flag[14]
#define SL_RESET            0xE0
#define SL_SIOVST           0xE1
#define SL_NPR_TLOV         0xE2
#define SL_MPR_TLOV         0xE3
#define SL_STACKEEPON		0xE4			//=1���Ӳ��������ϴ󣬶��ӽӴ�����ֹ�Ͽ� 20100510
#define	SL_TAOV				0xE5			//=1���೬��
#define SL_TBOV			    0xE6			//=1���೬��
#define SL_SKTOV            0xE7            //=1�����ж�SKIIP����
#define SL_SERIESTOPING    	0xE8			//=1�������ع���ͣ������ 
#define	SL_ERRSTOPING       0xE9      		//=1����һ�����ͣ������
#define SL_NORSTOPING       0xEA            //=1������������ͣ������
#define	SL_UDSTACOK       	0xEB      		//=1����ѹ��ﵽ������
#define SL_CBON_FH       	0xEC            //=1CBON�����־λ
#define SL_SERSTOP_FH       0xED            //=1SERSTOP�����־λ
#define SL_HIDCOV         	0xEE			//=1�м�ֱ��ն��IGBTӲ������20120228atbjtu_chopper	BJTULVRT201204
#define SL_SYN_FH         	0xEF   			//SYN�����־λ    		    


//------------------------------------const����--------------------------------------------

//eepromλ����
const  Uint16 ONEBYTE[8]={0x0080,0x0040,0x0020,0x0010,0x0008,0x0004,0x0002,0x0001};

//AD1544ͨ��ѡ��
const  Uint16 AD1544[4]={0x0000,0x2000,0x4000,0x6000};		
//--------------------------------------��������-------------------------------------------
Uint16	flag[16];													//��־λ����
//Uint16	disp[15];													//��־����

//---2013-12-13--ZZJ���ӵ������
//------------------------������Ų���ʶ��MagnetCurve200909------------------------------------
struct	MC_DATA{
	float   x[6];
	float   y[6];
	float   temp[6];
	float   k;
	float   in;
}MC_DATA;
float   MC_y_test;
float   MC_U_test; 
float	Uns_ft;
Uint16	MC_N_test;
Uint32	MC_F_cnt;
//---2013-12-13--ZZJ���ӵ������

Uint32	QEP_CNT1;
Uint32	QEP_CNT2;
int16	QEPPHE_N;


float   pll_theta; 				//201011PLL
float   ptheta;
float   ntheta; 
float temp_pd;
float temp_pq;
float temp_nd;
float temp_nq; 
float   NGS_Udq_lv;

float   NGS_Udq_p;
float   NGS_Udq_n;
float   NGS_Udq_epsilon;
float   NGS_Udq_p_ex;		//20130206
float   NGS_Udq_epsilon_lv;	//20130301
float   NGS_Udq_pflt;		//20130301

float   LV_A1;				//201011LVRT
float   LV_A2;
float   LV_T1;
float   LV_T2;

float   lv_flag_flt;		//2013-12-6 LVRT��־λ��ʱ������

//ModbusRS485
Uint16  length485;													//modbus
Uint16  longtx_num;													//modbus

float   RUN_mpridrf_exi;
Uint16  RUN_mpriq;
Uint16  _OUT3_TEST;
Uint16  _NQEPPCO;
Uint16  R_SCOUT;
float   Ud_lv;
float   temp_ud;

//float   NGS_Udq_p;
//float   NGS_Udq_epsilon;
float   NGS_Udq;
float   PHAI_d;
float   PHAI_q;
float   PHAI_dq;

int32   ET_SUM1;
int32   ET_SUM2;

/*���������SVPWM����*/
Uint16 SW_NPR,SW_MPR; 
float   vdc;	 
float   m=0.0;
float   ua_m=0,ub_m=0,uc_m=0;  //���Ʋ�
float   u_alfa_NPR=0,u_beta_NPR=0;
float   u_alfa_MPR=0,u_beta_MPR=0;


//����ֵ�Ĵ���
struct	GIVE{
	float   urf;					   //�����м�ֱ����ѹ���ֵ
	float   npriqrf;                   //�����޹���������ֵ(�������޹�����ʱʹ��)
	float   toqrf;                      //����ת�ظ���ֵ(�й�)
	float   anglerf;                    //���๦�������Ƕȸ���ֵ(�޹�) �Ƕ�
	float   lvwtiqrf;                   //�͵�ѹ��Խ�ڼ�������޹�����ָ��20121103
	float   toqrfrun;                  //����ת�ظ���ֵ(�й�)201205LVRTatZB
	float   toqrfflt;                   //����ת�ظ���ֵ(1s���˲�ƽ��ֵ)201205LVRTatZB
	float   npriqrf_cl;                   //�����޹���������ֵ(�������޹�����ʱʹ��)201205LVRTatZB
	float   toqrf_lv;                      //����ת�ظ���ֵ(�й�)	20130128
}GIVE;
float OCS_Trf;                          //���ظ�������ת��ָ��

//����������ؼĴ���
struct	RUN{									
	float   urf;						//��ѹ��������ֵ
	float   ustep;						//��ѹ�������ֲ���
	float   mpridrf;						//�й�������������ֵ
	float   mpridstep;						//�й������������ֲ���
	float   npriqrf;						//�޹�������������?
 	float   npriqstep;						//�޹������������ֲ���
	float   mpriqrf;						//�޹�������������?
 	float   mpriqstep;						//�޹������������ֲ��
	float   toqrf;						//ת�ظ�������ֵ
	float   toqstep;					//ת�ظ������ֲ���
	float   aglrf;						//���������Ǹ�����
	float   aglstep;					//���������Ǹ������ֲ���

	float   staidrf;					//���ж���d�����ָ��
	float   staiqrf;					//���ж���q�����ָ��
	float   staidstep;					//���ж���d���������
	float   staiqstep;					//���ж���q���������  

	float   mpridrf_g;						
	float   mpriqrf_g;					
 	float   mpriqrf_g_exlv;					//20130221
    
    float   radianrf;
	float   mpridrf_exi;
	float   mpridrf_var;
}RUN; 
//����任��ؼĴ���
struct	TRANS_DATA{
    float a;           	//a��
	float b;           	//b��
	float c;           	//c��
	float alfa;	       	//alfa��
	float beta;	       	//beta��
	float d;		   	//d��
	float q;           	//q�� 
	float sintheta;    	//����ֵ
	float costheta;	   	//����ֵ
	float dflt;	   		//�˲���dֵ
	float qflt;	   		//�˲���qֵ
	float amp;			//��ֵ
	float ampflt;		//�˲����ֵ
	float dflt2;	   	//С�˲���dֵ20091027atzyΪ�˼���������
//--------20121103--------
	float dpll;	   		//201011PLL
	float qpll;	   		//201011PLL
	float palfa;	    
	float pbeta;	 
	float pd;		   	
	float pq;       
	float nalfa; 	
	float nbeta;
	float nd;		   
	float nq;
    float de_pd;
    float de_pq;
    float de_nd;
    float de_nq;
    float de_fltpd;
    float de_fltpq;
    float de_fltnd;
    float de_fltnq;
	float de_psintheta;
	float de_pcostheta;	 
	float de_nsintheta;
	float de_ncostheta;	 //201011PLL 
	float dbsf;		//BJTULVRT201204
	float qbsf;	
	float dnbsf;		//BJTULVRT201204
	float qnbsf;	
    float ab;          //ab BJTULVRT201204
	float bc;           //bc

};																 
struct	TRANS_DATA TRS_NPR_I;   //����������ĵ���������NPR��Ϊ��׺������grd�������ֵ��������������������������
struct	TRANS_DATA TRS_MPR_I;   //����������ĵ���
struct	TRANS_DATA TRS_MPR_U;   //�����������������
struct	TRANS_DATA TRS_NPR_U;   //���������������
struct	TRANS_DATA TRS_NGS_U;   //��������ѹ
struct	TRANS_DATA TRS_STA_I;   //���ӵ���
struct	TRANS_DATA TRS_STA_U;   //���ӵ�ѹ
struct	TRANS_DATA TRS_GSTA_U;  //Ŀ�궨�ӵ�ѹ
struct	TRANS_DATA TRS_PSTA_U;  //���ڱ�����λ�ü��Ķ��ӵ�ѹ
struct	TRANS_DATA TRS_PMPR_I;  //���ڱ�����λ�ü���ת�ӵ���   
struct	TRANS_DATA DIP_NPR_U;  //���ڹ��ʼ���  
struct	TRANS_DATA DIP_NPR_I;  //���ڹ��ʼ��� 
struct	TRANS_DATA DIP_STA_U;  //���ڹ��ʼ��� 
struct	TRANS_DATA DIP_STA_I;  //���ڹ��ʼ��� 
struct	TRANS_DATA DIP_MPR_I;  //���ڹ��ʼ���  
struct	TRANS_DATA TRS_GAC_U;  //����201011PLL	
struct	TRANS_DATA TRS_SCR_I;   //����crowbar����BJTULVRT201204

struct I_DATA_PLL				//201011PLL
{
   	float last;
   	float out0;
   	float out1;
	float out;
}I_DATA_PLL; 

//PI����ؼĴ���
struct PI_DATA
{
	float reference;							//����ֵ
	float feedback;								//����ֵ
	float errorp;								//�β�
	float error;								//���
	float integrator;							//ǰ�λ�ֽ��
	float out;
	float last;							//201011PLL
	float outflt;						//201011PLL 
};  
struct PI_DATA PI_NPR_Id;				//���������d������ջ�
struct PI_DATA PI_NPR_Iq;				//���������q������ջ�
struct PI_DATA PI_MPR_Id;				//��������d������ջ�
struct PI_DATA PI_MPR_Iq;				//���������q������ջ�
struct PI_DATA PI_NPR_U;				//�����������ѹ��
struct PI_DATA PI_MPR_U;				//�������ջ�
struct PI_DATA PI_STA_Id;				//���ſ���d
struct PI_DATA PI_STA_Iq;				//���ſ���q 
struct PI_DATA PI_DATA_PLL;				//201011PLL
struct PI_PARA PI_PARA_DYMI;			//��̬������PI����BJTULVRT201204

struct PI_PARA
{
   float kp;
   float ki;
   float kd;
   float errmax;
   float errmin;
   float incrementmax;
   float outmax;
};
struct PI_PARA PI_PARA_NPRU;
struct PI_PARA PI_PARA_NPRID;
struct PI_PARA PI_PARA_MPRU;
struct PI_PARA PI_PARA_MPRID;
struct PI_PARA PI_PARA_NPRIQ;
struct PI_PARA PI_PARA_MPRIQ;
struct PI_PARA PI_PARA_DYNU;
struct PI_PARA PI_PARA_DYNID;
struct PI_PARA PI_PARA_DYNIQ;
struct PI_PARA PI_PARA_MPRI;
struct PI_PARA PI_PARA_STAI;
struct PI_PARA PI_PARA_PLL;				//201011PLL


//�ѭ����ʱ������ʱ������
struct	MAIN_LOOP{
	int32 cnt1;					//��ѭ���ʱ�����5ms
	int32 cnt2;					//��ѭ����ʱ�Ĵ���10ms
	int32 cnt3;					//��ѭ����ʱ�Ĵ���20ms
	int32 cnt4;					//��ѭ���ʱ�Ĵ���50ms
	int32 cnt5;					//�ѭ����ʱ�Ĵ���100ms
	int32 cnt6;					//��ѭ����ʱ�Ĵ��1000ms
	int32 pulse;				//��ѭ����ʱ����Ĵ���
    int32 cnt_AMUX;            	//����AD
	
	int32 cnt_poweron;			//preparation time delay
	int32 cnt_pwmout;			//PWM�����ʱ
	int32 cnt_nprlamp;			//�������巢��ָʾ����˸��ʱ����
	int32 cnt_mprlamp;			//�������巢��ָʾ����˸��ʱ���� 
	int32 cnt_freq;			   	//Ƶ��ƫ�ƼƱ
	int32 cnt_cbfreq;
	int32 cnt_estop;
	int32 cnt_rcvr;				//������ʱ�ָ���ʱ
	int32 cnt_otser;			//���ع�����ʱ
	int32 cnt_datasave;
	int32 cnt_datasave2;

	int32 cnt_detectdelay;		//�������⶯���л��ӱ	110818
	int32 cnt_exfault;
	int32 cnt_cbtp;
	int32 cnt_cberror;
	int32 cnt_mainkerror;
	int32 cnt_mainferror;
	int32 cnt_preerror;
	int32 cnt_stacerror;
	int32 cnt_pgovload;
	int32 cnt_qgovload;
	int32 cnt_canfault;
	int32 cnt_speedout;
	int32 cnt_uaclv1;   		//20091027atzy		
	int32 cnt_gfault1;			//���ӵع���
	int32 cnt_gfault2;			//����ӵع���
	int32 cnt_synfail;			//ͬ������ʧ����
	int32 cnt_nprtlov;			//�����г���
	int32 cnt_mprtlov;			//�����г���
	int32 cnt_nskiptov;			//����SKIIP����
	int32 cnt_mskiptov;			//����SKIIP����
	int32 cnt_steadyfb;			

	int32 cnt_isteady0;
    int32 cnt_mprsteady0;
	int32 cnt_senszfstdy;
	int32 cnt_qcapspdin;
	int32 cnt_qepzdisturb;
	int32 cnt_qepcntok;
	int32 cnt_qcapdisturb;

	int32 cnt_ecposcheck;		//���������ӳټ�� 20130801
	int32 cnt_ecpostrace;		//ÿ�νǶȱ仯���ӳ��ж� 20130801
//sysctl_zl_start
    int32 cnt_cbon;      		//���ϱպ��ӳ���
	int32 cnt_errstop;          //һ�����ͣ��
	int32 cnt_serstop;          //���ع���ͣ��
	int32 cnt_norstop;         	//����ͣ��
	int32 cnt_epwmstop;         //һ����Ϸ��������ʱ������20110829
	int32 cnt_synrun;          	//����     
	int32 cnt_sysoff;         	//����ͣ���ӳ٣�20120321
//sysctl_zl_end 
	int32 cnt_reset;
    int32 cnt_clostacmd;
	int32 cnt_nprcmd;
	int32 cnt_mprcmd;
	int32 cnt_ein;
	int32 cnt_sysrun;
	int32 cnt_prec;	

	//canopen
	int32 canopen_rx;
	int32 canopen_tx;
	int32 cnt_cbreset;

	int32 et_relay1;     
	int32 et_relay2;

	int32 cnt_ocsein1;     
	int32 cnt_ocsein2;
	int32 cnt_ocssysrun1;     
	int32 cnt_ocssysrun2;

//LVRT
	int32 cnt_scrizero;
	int32 cnt_lv_scron;
	int32 cnt_lv_mpwmstart;
	int32 cnt_lv_mpwmstop;
	int32 cnt_mpwmrestart;
	int32 cnt_npwmrestart;
	int32 cnt_lv_state;
	int32 cnt_lv_rcv;
	int32 cnt_lv_time;
	int32 cnt_lv_test;
	int32 cnt_scrondelay;
	int32 cnt_lv_fault1;
	int32 cnt_lv_fault2;
	int32 cnt_mc_ack;   		//MagnetCurve2013-12-13	
	
	int32 cnt_resetrn;
	int32 cnt_phorde;   		//201005atcpc	
	int32 cnt_encofault;   		//201005atcpc	
//------20121103atsp-------
	int32 cnt_lv_test2;
	int32 cnt_lv_unbalance;		
	int32 cnt_lv_qworking;	
	int32 cnt_scrizero2;
	int32 cnt_lv_phicontrol;	
	int32 cnt_lv_lowpi;	
	int32 cnt_lv_mpridvar;	
	int32 cnt_lv_utlv;
	int32 cnt_idcov;
	int32 cnt_idcovdelay;
	int32 cnt_freqrecv;			//201011PLL
	int32 cnt_lv_irqdelay;		//20121202
	int32 cnt_vdscron;			//20121203
	int32 cnt_vdscroff;			//20121203

//--------20130225atsp--------
	int32 cnt_lv_scroff1;		//20121210
	int32 cnt_lv_scroff2;		//20121210
	int32 cnt_lv_scroff3;		//20130221
	int32 cnt_lv_unblcscroff1;		//20121210
	int32 cnt_lv_unblcscroff2;		//20121210

	int32 cnt_lv_nprqworking;		//20130124
	int32 cnt_lv_npriqrf;			//20130124
	int32 cnt_lv_mpridrf;			//20130130
	int32 cnt_lv_kq;				//20130124
	int32 cnt_lv_unblcscroff3;		//20130124
	int32 cnt_lv_recmstop;			//20130124
	int32 cnt_lv_dlrecmstop;		//20130130
	int32 cnt_lv_xnzkkz;			//20130202
	int32 cnt_jgvdscron;			//20130205
	int32 cnt_lv_reciq;				//20130205
	int32 cnt_lv_holdpow;			//20130205
	int32 cnt_lv_scrkeepon;			//20130221
	int32 cnt_chopper;				//2013-12-6	ZZJն������

}MAIN_LOOP;  

//����AD�����Ĵ���
Uint16 _OUT_AMUX1=0;  //��������ADѡͨ�źţ�ÿ��Ҫѡͨ��һ��ADͨ����_OUT_AMUX��1��Ȼ���͵�CPLDȥ������ѡͨ16ѡ1оƬ
Uint16 _OUT_AMUX2;    //��������ADѡͨ�źţ�ÿ��Ҫѡͨ��һ��ADͨ����_OUT_AMUX��1��Ȼ���͵�CPLDȥ������ѡͨ16ѡ1оƬ
struct  AMUX{
    float NPR_tempa;  //NPR��A��뵼���¶ȣ�Skiip��������
    float NPR_tempb;  //NPR��B��뵼���¶ȣ�Skiip��������
    float NPR_tempc;  //NPR��C��뵼���¶ȣ�Skiip��������
    float MPR_tempa;  //MPR��A��뵼���¶ȣ�Skiip��������
    float MPR_tempb;  //MPR��B��뵼���¶ȣ�Skiip��������
    float MPR_tempc;  //MPR��C��뵼���¶ȣ�Skiip��������
    float Lac_temp;   //���������¶�
	float Ldudt_temp; //du/dt���¶�
	float skiiptempmax;    //SKIIPģ����¶����ֵ
	float NPR_skiiptemp;    //����SKIIPģ����¶����ֵ
	float MPR_skiiptemp;    //����SKIIPģ����¶����ֵ
	float Lac_R;   			//�������pt100
	float Ldudt_R; 			//du/dt��pt100

}AMUX;

//ADģ�鴦���Ĵ���
struct	AD{
	int16  dat[18];													//AD��ǰת��������
	Uint32 cputime;
	Uint32 cputime_last;
}AD;

//ADת������Ĵ���
struct	ADFINAL{
	int16  ia1;				//����A�����
	int16  ib1;				//����B�����
	int16  ic1;				//����B�����
	int16  ia2;				//�����A�����
	int16  ib2;				//�����B�����
	int16  ic2;				//�����B�����
	int16  isa;              //���ӵ���A�� 
    int16  isc;              //���ӵ���C��
    int16  idc;              //chopper����
    int16  freq;            //VVVF����ʱ������λ������Ƶ��
	int16  uab1;			//����ab��ѹ
	int16  ubc1;			//����bc��ѹ
	int16  uab2;			//������Ӳ�ab��ѹ
	int16  ubc2;			//������Ӳ�bc��ѹ
	int16  uab3;			//������ѹab�����Ϻ󣩴��˲�ͨ��
	int16  ubc3;			//������ѹbc�����Ϻ󣩴��˲�ͨ��
    int16  udc;             //ֱ����ѹ
    int16  ubc;			    //����ǰbc��ѹ
	int16  uab;			    //����ǰab��ѹ
    int16  AMUX;            //����AD�ź�



}ADFINAL;
   

//��ѹʸ��
struct AD_DATA{
	  float  a;
	  float  b;
	  float  c;
	  float  ab;
	  float  bc;
	  float  ac;
	  float  cb;
	  float  ba;
	  float  a_temp;
	  float  b_temp;
	  float  c_temp;
	  float  ab_temp;
	  float  bc_temp;
	  float  a_dc;
	  float  b_dc;
	  float  c_dc;
	  float  ps;
};
struct AD_DATA AD_OUT_GRD_U;  //������ѹ������ǰ��
struct AD_DATA AD_OUT_STA_U;  //������Ӳ��ѹ ���˲�ͨ��
struct AD_DATA AD_OUT_NGS_U;  //������ѹ�����Ϻ�
struct AD_DATA AD_OUT_NPR_I;  //�������������
struct AD_DATA AD_OUT_MPR_I;  //�������������
struct AD_DATA AD_OUT_STA_I;  //���Ӳ����  
struct AD_DATA AD_OUT_NGF_U;  //������ѹ�����Ϻ󣩴��˲�ͨ��
struct AD_DATA AD_OUT_STAD_U;  //��ֵ
struct AD_DATA AD_OUT_SCR_I;  //ACTIVECROWBAR����  
struct AD_DATA AD_OUT_DC_I;  //CHOPPER����  

float  AD_OUT_UDC; //AD����������ֱ���繣�V��

//��ƽ��ֵ
struct MEAN_DATA{
       float ia1,ib1,ic1;  			//�������ƽ��ֵ�˲�
	   float ia2,ib2,ic2;  			//�������ƽ��ֵ�˲�
	   float ia3,ib3,ic3;  			//���Ӳ����ƽ��ֵ�˲�
	   float uab1,ubc1;	   			//�����ѹƽ��ֵ�˲�
	   float uab2,ubc2;	   			//���Ӳ��ѹƽ��ֵ�˲�
	   float uab3,ubc3;	   			//���Ϻ������ѹ,���˲�ͨ��magnetCurve2013-12-13
	   float ua1,ub1,uc1;	   		//�����ѹƽ��ֵ�˲�
	   float uab_d,ubc_d;	   		//�����붨�Ӳ��ѹƽ��ֵ�� ���˲�ͨ��
	   float zfia1,zfib1,zfic1; 	//���������������Ư�˲�
	   float zfia3,zfib3,zfic3; 	//���Ӳ������������Ư�˲�
	   float zfuab1,zfubc1; 		//�����ѹ��������Ư�˲�
	   float zfuab2,zfubc2; 		//���ӵ�ѹ��������Ư�˲�
	   float zfuab3,zfubc3; 		//�����ѹ ���˲�ͨ��	��Ư�˨
	   float nid,niq,nud,nuq;    	//��NPR�������˲�
	   float uab,ubc;	   			//����ǰ�����ѹƽ��ֵ�˲�
	   float zfuab,zfubc; 		    //����ǰ��ѹ��������Ư�˲�
	   float udc;
	   float iac3,iba3,icb3;				//���Ӳ����ƽ��ֵ�˲�
	   float psactive;				//���Ӳ����ƽ��ֵ�˨
	   float Lac_temp,Ldudt_temp;   //����¶��˲�
	   float ubc_t;					//20130801
	   	   
}MEAN_DATA;  

//����ģ��������
struct	PRO{									
	         	float	NPR_iac;								//����������ֵ,��׼�����İٷ�ֵ
				float	MPR_iac;								//���ӵ�����ֵ,��׼�����İٷ�ֵ
				float	udc;									//�м�ֱ����ѹ��ʵ��ֵ(V)
				float	NPR_uab;								//���� ab�ߵ�ѹʵ��ֵ(V)
				float	NPR_ubc;								//���� bc�ߵ�ѹʵ��ֵ(V)
				float	STA_uab;								//���Ӳ� ab�ߵ�ѹʵ��ֵ(V)
				float	STA_ubc;								//���Ӳ� bc�ߵ�ѹʵ��ֵ(V)
				float	GID_uab;								//������ ab�ߵ�ѹʵ��ֵ(V) 20091026atzy
				float	GID_ubc;								//������ bc�ߵ�ѹʵ��ֵ(V) 20091026atzy
				float	rcvr;									//�ӳٻָ�ʱ��
				float   STA_iac;                            	//���ӽ�������iac
				float   STA_icb;                            	//���ӽ�������iba
   				float   NPR_TLOV;                            	//�������¶�
				float   MPR_TLOV;                            	//�������¶� 
				float   speed;                               	//���ת�� r/min
				float   speedflt;                               //20090815
				float   sta_iar;	  							//���Ӳ�a�����A RMS
				float   sta_ibr;	  							//���Ӳ�b�����A RMS
				float   sta_icr;	  							//�����c����A RMS
				float   sta_uar;	  							//���Ӳ�a���ѹV RMS
				float   sta_ubr;	  							//���Ӳ�b���ѹV RMS
				float   sta_ucr;	 							//�����c��ѹV RMS
				float   npr_uar;	  							//����a���ѹV RMS
				float   npr_ubr;	  							//����b���ѹV RMS
				float   npr_ucr;	  							//����c���ѹV RMS
				float   npr_iar;   								//����,A�ಢ��������Чֵ,��λA
				float   npr_ibr;	  							//����,B�ಢ�������Чֵ,��λA
				float   npr_icr;	  							//���,C�ಢ�������Чֵ,��λA
				float   Psactive; 								//���Ӳ�й�����
				float   Psreactive; 							//���Ӳ��޹�����
				float   Ps;          							//���Ӳ����ڹ���
				float   Pnactive;    							//�����й�����
				float   Pnreactive;  							//�����޹�����
				float   Pn;          							//�������ڹ���
				float   Pgactive;    							//�����ܵ��й�����	
				float   Pgreactive;  							//�������޹�����				
				float   Pg;       								//����ܵ����ڹ���
				float	CHOP_idc;								//chopper������ʵ��ֵ(A)20120228	BJTULVRT201204
				float   Psactive2; 								//���Ӳ��й�����
				float   Psreactive2; 							//��Ӳ�޹�����
				float   Pnactive2;    							//�����й�����
				float   Pnreactive2;  							//�����޹�����
				float   Pgactive2;    							//�����ܵ��й�����	
				float   Pgreactive2;  							//�������޹�����				

				float   Pgactive_lv;   							//LVRTǰ�Ĺ���20121210	

		   }PRO; 
 
//��ʾ�ر���
struct	DISP{										
    			float  npr_iai;   //����,A�ಢ������˲ʱֵ,��λA
				float  npr_ibi;	  //����,B�ಢ������˲ʱֵ,��λA
				float  npr_ici;	  //���,C�ಢ�����˲ʱֵ,�λA
				float  mpr_iai;	  //�����,A�����˲ʱֵ,��λA
				float  mpr_ibi;	  //�����,B������ֵ,��λA
				float  mpr_ici;   //�����,C�����ʱֵ,��λA
				float  npr_iar;   								//����,A�ಢ��������Чֵ,��λA
				float  npr_ibr;	  							//����,B�ಢ������Чֵ,��λA
				float  npr_icr;	  							//����,C�ಢ��������Чֵ,��λA
				float  mpr_iar;	  //����,A�������Чֵ,��λA
				float  mpr_ibr;	  //�����,B�������Чֵ,��λA
				float  mpr_icr;   //�����,C������Чֵ,�λA 
    			float  npr_uab;	  //����ab���ѹV RMS
				float  npr_ubc;	  //����bc���ѹV RMS

				float  sta_uab;	  //���Ӳ�ab���ѹV RMS
				float  sta_ubc;	  //���Ӳ�bc���ѹV RMS
				float  sta_iac;	  //���Ӳ��ߵ���A RMS
				float  sta_iba;	  //���Ӳ��ߵ���A RMS

				float  grd_uab;   //����ǰ����ab��ѹV RMS
				float  grd_ubc;   //����ǰ����bc��ѹV RMS
				float  uab23;     //����ͬ������ǰ����ǰ��ab��ѹ�� V
				float  ubc23;     //����ͬ������ǰ����ǰ��bc��ѹ�� V			
				float  Lac_temp;  //�������¶� ���϶�
				float  Ldudt_temp;  //�������¶� ���϶�
				float  NPR_skiptemp;  //SKIIP�¶� ���϶�
				float  MPR_skiptemp;  //SKIIP�¶� ���϶�
				float  urf;
				float  udc;
				float  mpridrf;
				float  npriqrf;
				float  mpriqrf;
				float  toqrf;
				float  toqfb;
				float  aglrf;
				float  freq;
				float  speed;
				float  pionu;   	//����ѹ��ʳ�
				float  pionid;		//�������d�����
				float  pioniq;		//�������q�����
				float  mexi;		//
				float  piomid; 		//�������d�����
				float  piomiq; 		//�������q�����
				float  Psactive; 	//���Ӳ��й�����
				float  Psreactive; 	//���Ӳ��޹����
				float  Ps;          //���Ӳ����ڹ���
				float  Pnactive;    //�����й�����
				float  Pnreactive;  //�����޹�����
				float  Pn;          //�������ڹ���
				float  Pgactive;    //�����ܵ��й�����	
				float  Pgreactive;  //�����ܵ��޹�����				
				float  Pg;       	//�����ܵ����ڹ���			
			}DISP;
 
//��ģ�����
struct CAP_DATA	{
					float		prd;				//Cap4�¼�����
					Uint32		adsmptsctr; 		//AD����ʱ�̵�Cap4������ֵ(����AD��CAP4֮������)
					float 		phase;	    		//�¼���ǰ��λ//����������
					float 		freqtmp;			//����¼�Ƶ��
					float 		freq;	    		//ȷ�Ϻ��Ƶ��
					float	    omigasyn;			//ͬ����Ƶ�ʣ���Ƶ��
					float 		omigaslp;	    	//ת���Ƶ��
					float	    radpertb;			//�������Ƶ�λʱ��ʸ��λ������ rad per timebase
					float	    nprtrstheta;		//�����㷨���任�Ƕ�
					float	    npratitheta;		//�����㷨���任�Ƕ�
					float	    mprtrstheta;		//����㷨���任�Ƕ�
					float	    mpratitheta;		//�����㷨���任�Ƕ�
					float	    stavectheta;	    //���Ӵ��������A������λ��	
					float	    nprtrstheta_lv;		//�����㷨���任�Ƕ� 201011LVRT 201011PLL
				};
struct CAP_DATA CAP4,CAP5;

struct QEPDATA{
//----------------------ת��λ�ü�����-----------------------------------------------------------
					Uint16		qcapprd;		//QCAP��Ԫ���ڼĴ���ֵ�����ڲ��ܷ���ת��
					float 		omigamec;		//��е���ٶ�
					float 		omigarote;	    //������ٶ� rotor electric
					float 		omigaroteflt;	//
					float 		rotpos;			//ת�ӵ�ǰλ��rad���绡�ȣ�
					Uint32   	adsmposcnt;		//����ʱ�̱���������  
					Uint32 		posilat;        //��¼Z�ź�������ʱCNT����ֵ
					Uint32 		qposlat;        //��¼Unit time��QEPCNT�ļ���ֵ�����ڲ�Ƶ����ת��
					Uint32 		qposlat1;        //��¼Unit time��QEPCNT�ļ���ֵ�����ڲ�Ƶ����ת��
					Uint32 		qposlat2;        //��¼Unit time��QEPCNT�ļ���ֵ�����ڲ�Ƶ����ת��
					float 		rotposdisp;		//DA��ʾ
					float 		rotradpret0;	//����QEP Z�źſ�����
//----------------------������λ�ü�����--------------------------------------------------------	
					float 		encodpos;		//������λ��rad���绡�ȣ�
					float 		u_stapos;		//2S�ο�ϵ�¶��ӵ�ѹʸ����λ��rad���绡�ȣ�
					float 		i_rotpos;		//2S�ο�ϵ��ת�ӵ���ʸ����λ��rad���绡�ȣ�
			  }QEPDATA; 

//SCIģ�����
struct	SCI{
					Uint16 txb[2100];				//SCIB��������//modbus
					Uint16 rxb[SCI485NUM_RX];		//SCIB��������//modbus
					int32 cnt_sciover;				//SCI����/���ճ�ʱ��ʱ��
					int32 cnt_scispace;				//SCI���յ����͵ļ����ʱ��
		   }SCI;

//SCICANOPENģ�����
struct	SCI_CANOPEN{
					Uint16 txb[SCICANOPENTXNUM];			//SCIB��������
					Uint16 rxb[SCICANOPENRXNUM];			//SCIB��������
					Uint16 heartbeat;
					int32  cnt_heartbeat;
					int32  cnt_sciover;
					Uint16 rx_controlword;
					Uint16 rx_torque;
					Uint16 rx_angle;
					Uint16 tx_torque;
					Uint16 tx_speed;
					Uint16 tx_state1;
					Uint16 tx_state2;	
					Uint16 tx_watertempin;
					Uint16 tx_watertempout;
					Uint16 tx_skiiptempmax;
					Uint16 tx_demand;
		   }SCI_canopen;

//SPIģ�����
struct	SPI{
					Uint16 da7614_txb[SPINUM];		//SPI,DA��������
					Uint16 da7614point;				//
		   }SPI;

//EEPROMģ�����
struct	EEPROM{
				Uint16 data[11];					//������д�������
				Uint16 point;						//EEPROM��ǰ���������
				Uint16 mcode;						//��Ҫ�޸ĵĹ���������
			  }EEPROM;

//RTIMERģ�����
struct	RTIMER{
				Uint16 time[6];				//��ǰʱ��[5~0]-->�� �� �� ʱ �� �루��Ϊ8λ���ݣ�
			  }RTIMER;

//�����۲�BJTULVRT201204
struct PHI_DATA
{  
   float PHId;							//d�����
   float PHIq;							//q�����
   float PHIdflt;						//d���������ָ��
   float PHIqflt;						//q���������ָ�� 
   float PHIdflt2;						//d���������ָ��
   float PHIqflt2;						//q���������ָ�� 
   float PHIMd;							//d����� ����ims��̬����
   float PHIMq;							//q����� ����ims��̬����
   float PHIMdflt;						//d����� ����ims��̬����
   float PHIMqflt;						//q����� ����ims��̬���� 
   float Ird;							//d��ת�ӵ���
   float Irq;							//q��ת�ӵ���
   float Isd;							//d�ᶨ�ӵ���
   float Isq;							//q�ᶨ�ӵ���
   float Isdflt;							//d�ᶨ�ӵ���
   float Isqflt;							//q�ᶨ�ӵ���
   float ISD;							//d�ᶨ�ӵ���
   float ISQ;							//q�ᶨ�ӵ���
   float Id;							//d���������ָ��
   float Iq;							//q���������ָ��
   float Id_max;						//d���������ָ���޷�
   float Iq_max;						//q���������ָ���޷�
   float Id_min;						//d���������ָ���޷�
   float Iq_min;						//q���������ָ���޷�
   float theta;							//�����任�Ƕ�
   float k;								//����LmУ��ϵ��
   float PHId0;							//d�������ֵ̬ 201203
   float PHIq0;							//q�������ֵ̬
   float IMD;							//ת�ӵ���
   float IMQ;							//ת�ӵ���
   float Imd;							//d��ת�ӵ���
   float Imq;							//q��ת�ӵ��� 
   float Imdflt;							//d��ת�ӵ���
   float Imqflt;							//q��ת�ӵ��� 
};
struct PHI_DATA PHI_DATA_M; 

//201110bs
struct BS_DATA
{
	float in;					//in(k)
	float inp;					//in(k-1)
	float infp;					//in(k-2)
	float out;					//out(k)
	float outp;					//out(k-1)
	float outfp;				//out(k-2)
};  
struct BS_DATA BS_MPR_Id;				//ת�Ӳ����d��
struct BS_DATA BS_MPR_Iq;				//ת�Ӳ����q��
struct BS_DATA BS_STA_Id;				//���Ӳ����d��
struct BS_DATA BS_STA_Iq;				//���Ӳ����q��
struct BS_DATA BS_NPR_Ud;				//���������d��
struct BS_DATA BS_NPR_Uq;				//���������d��
struct BS_DATA BS_NPR_Udn;				//���������d��
struct BS_DATA BS_NPR_Uqn;				//���������d��

struct BS_PARA
{
   float f0;
   float fb;
   float outmax;
};
struct BS_PARA BS_PARA_MPRI;
struct BS_PARA BS_PARA_STAI;
struct BS_PARA BS_PARA_NPRU;




//-----------------------------�ڲ�����----------------------------------------------------------
Uint16  _NULL_VAL=0;
Uint16  _MSG_SCOUT1;												//SCOUT��Ϣ����(ǰ��)
Uint16  _MSG_SCOUT2;												//SCOUT��Ϣ����(����)
Uint16  _SY_RTRN;
Uint32   POSCNT_TEST;
float   DM_imrd;   						//ת�����ŵ���
float   DM_imrq;   						//ת�����ŵ���
float   DM_Lr;							//��ǰ���Դ���
float   Te_feedback;                    //ʵ��ת��ֵ����
float   Pnactive;    					//�����й�����
float   Pnreactive;    					//�����޹�����
float   Pcreactive;    					//��������޹�����201205LVRTatZB
//----------------------------��������------------------------------------------------------------
Uint16 _MC_TYPE;						//���Ͳ���
Uint16 _MC_REV;							//�����汾
Uint16 _MC_DATE;						//��������
Uint16 _MC_ID;							//��Ʒ���
Uint16 _SCIB_ADDR;						//485�ڵ��ַ
Uint16 _PROSTDBY1;						//
Uint16 _PROSTDBY2;						//

Uint16 _SW_FR;							//����Ƶ��(kHz)
Uint16 _DEADTIME;						//�������С��ͨʱ��(us)
Uint16 _COMPTIME;						//�������С��ͨʱ��(ms)
Uint16 _MINONTIME;						//�������С��ͨʱ��(us)

Uint16 _RU_UDCT;						//��ѹָ�����ʱ��(ms)
Uint16 _RU_IDT;							//����ָ�����ʱ��(ms)
Uint16 _RU_IQT;							//����ָ�����ʱ��(ms)
Uint16 _RU_TOQT;						//ת��ָ����ֱ�(ms)
Uint16 _RU_AGLT;                        //����������ָ�����ʱ��(ms)
Uint16 _URF;							//ֱ����ѹ����ֵ
Uint16 _MIDRF;							//d���������ֵ
Uint16 _NIQRF;							//q���������ֵ
Uint16 _MIQRF;							//q���������ֵ
Uint16 _TOQRF;							//ת��ָ��
Uint16 _AGLRF;							//���๦��������
Uint16 _EIDCO;							//�ֶ� �������ŵ�������ϵ��
Uint16 _ENCODPOS;						//�ֶ� ��������ʼλ�ýǶ�

Uint16 _STDBY1;							//����1
Uint16 _STDBY2;							//����2
Uint16 _STDBY3;							//����3
Uint16 _STDBY4;							//����4
Uint16 _STDBY5;							//����5
Uint16 _STDBY6;							//����6
Uint16 _STDBY7;							//����7
//Uint16 _STDBY8;							//����8
Uint16 _MC_OK;							//����8	 MagnetCurve2013-12-13
Uint16 _STDBY9;							//����9
Uint16 _STDBY10;						//����10
Uint16 _STDBY11;						//����11
Uint16 _STDBY12;						//����12
Uint16 _STDBY13;						//����13
Uint16 _STDBY14;						//����14
float _eidco;
float _encodpos;
float _sc_freq1;
float _sc_freq2;

//----'����������'PC------
Uint16 _COMMAND1;
Uint16 _COMMAND2;
Uint16 _PCEROTRIG;					    //20100308
Uint16 _DISPLAY;
Uint16 _STATE1;
Uint16 _STATE2;
Uint16 _INPUT;
Uint16 _OUTPUT;
Uint16 _LVRT;

float _stdby01;							//���þ���С���㴦����ֵ
float _stdby02;							//���þ���С���㴦����ֵ
float _stdby03;							//�Ӿ���С���㴦���ֵ
float _stdby04;							//���í��С���㴦����ֵ
float _stdby05;							//���þ���С��������ֵ
float _stdby06;							//���þ���С���㴦ֵ
float _stdby07;							//���þ���С���㴦����ֵ
float _stdby08;							//���þ���С���㴦����ֵ
//------------------------����ģʽ����-------------------------------------------------------------
Uint16 _ENSCR;							//

//-----------------------PI����������--------------------------------------------------------------
Uint16	_NPR_U_Kp;		  		//�����������ѹ�ջ�����ϵ��
Uint16	_NPR_U_Ki;		   		//�����������ѹ�ջ�����ϵ��
Uint16	_NPR_U_Kd;		   		//����������ѹ�շ΢��ϵ��
Uint16	_NPR_U_outmax;			//����������ѹ�ջ�����޷�
Uint16	_NPR_U_errmax;		 	//�����������ѹ�ջ�����޷�
Uint16	_NPR_U_errmin;		   	//����������ѹ�ջ������ֵ
Uint16	_NPR_U_incrementmax;	//�����������ѹ�ջ������޷�

Uint16	_NPR_ID_Kp;				//��������������ջ�����ϵ��
Uint16	_NPR_ID_Ki;	   			//��������������ջ�����ϵ��
Uint16	_NPR_ID_Kd;	   			//��������������ջ�΢��ϵ��
Uint16	_NPR_ID_outmax;			//��������������ջ�����޷�
Uint16	_NPR_ID_errmax;	 		//��������������ջ�����޷�
Uint16	_NPR_ID_errmin;	  		//��������������ջ�����Сֵ
Uint16	_NPR_ID_incrementmax; 	//��������������ջ�����޷�

Uint16	_NPR_IQ_Kp;				//��������������ջ�����ϵ��
Uint16	_NPR_IQ_Ki;	   			//�������������ջ�����ϵ��
Uint16	_NPR_IQ_Kd;	   			//�������������ջ�΢��ϵ��
Uint16	_NPR_IQ_outmax;			//��������������ջ�����޷�
Uint16	_NPR_IQ_errmax;	 		//��������������ջ�����޷�
Uint16	_NPR_IQ_errmin;	  		//��������������������Сֵ
Uint16	_NPR_IQ_incrementmax; 	//��������������ջ������޷�

Uint16	_MPR_U_Kp;	   			//�����������ѹ�ջ�����ϵ��
Uint16	_MPR_U_Ki;	  			//�����������ѹ�ջ�����ϵ��
Uint16	_MPR_U_Kd;	  			//�����������ѹ�ջ�΢��ϵ��
Uint16	_MPR_U_outmax;	 		//�����������ѹ�ջ�����޷�
Uint16	_MPR_U_errmax;	  		//�����������ѹ�ջ�������
Uint16	_MPR_U_errmin;		 	//�����������ѹ�ջ������Сֵ
Uint16	_MPR_U_incrementmax; 	//�����������ѹ�ջ������޷�

Uint16 _MPR_ID_Kp;				//��������������ջ�����ϵ��
Uint16 _MPR_ID_Ki;				//��������������ջ�����ϵ��
Uint16 _MPR_ID_Kd;				//��������������ջ�΢��ϵ��
Uint16 _MPR_ID_outmax;			//��������������ջ�����޷�
Uint16 _MPR_ID_errmax;			//��������������ջ�����޷�
Uint16 _MPR_ID_errmin;			//��������������ջ������Сֵ
Uint16 _MPR_ID_incrementmax;		//��������������ջ������޷�

Uint16 _MPR_IQ_Kp;				//��������������ջ�����ϵ��
Uint16 _MPR_IQ_Ki;				//��������������ջ�����ϵ��
Uint16 _MPR_IQ_Kd;				//��������������ջ�΢��ϵ��
Uint16 _MPR_IQ_outmax;			//��������������ջ�����޷�
Uint16 _MPR_IQ_errmax;			//��������������ջ�����޷�
Uint16 _MPR_IQ_errmin;			//��������������ջ������Сֵ
Uint16 _MPR_IQ_incrementmax;	//��������������ջ������޷�


Uint16	_DYN_U_Kp;	   			//�����������ѹ�ջ�����ϵ��
Uint16	_DYN_U_Ki;	  			//�����������ѹ�ջ�����ϵ��
Uint16	_DYN_U_Kd;	  			//�����������ѹ�ջ�΢��ϵ��
Uint16	_DYN_U_outmax;	 		//�����������ѹ�ջ�����޷�
Uint16	_DYN_U_errmax;	  		//����������繱������޷�
Uint16	_DYN_U_errmin;		 	//�����������ѹ�ջ������Сֵ
Uint16	_DYN_U_incrementmax; 	//����������繱ջ������޷�


Uint16 _SC_RTRN;													//����������Դ���
Uint16 _SC_RTRT;													//���ι������Լ��ʱ��(ms)

Uint16 _SC_IACOV1;													//��׼�����İٷ�ֵ)
Uint16 _SC_UDCOV;													//�м�ֱ����ѹ��ѹֵ(V)
Uint16 _SC_UDCOVH;													//�м�ֱ����ѹ��ѹֵ����ѹ���䣩(V)
Uint16 _SC_IDCOV;													//��Ϊdc-chopper��������BJTULVRT201204
//Uint16 _SC_UDCLV;													//�м�ֱ����ѹǷѹֵ(V)
Uint16 _SC_VDCON;													//�ϵ��ѹ
Uint16 _SC_UACOV1;													//��ѹ������ѹ��ѹ����ֵ(V)
Uint16 _SC_UACLV1;													//������ѹȱ�ද��ֵ(V)
Uint16 _SC_IACOV2;													//��׼�����İٷ�ֵ)
Uint16 _SC_PGOV;													//
Uint16 _SC_QGOV;													//
Uint16 _SC_IACOVST;                                                 //���ӵ����������� 

Uint16 _SC_Rs;														//���ӵ���(mohm)
Uint16 _SC_Lls;														//����©��(mH)
Uint16 _SC_Rr;														//ת�ӵ���(mohm)
Uint16 _SC_Llr;														//ת��©��(mH)
Uint16 _SC_Lm;														//���ŵ�(mH)
Uint16 _SC_POLES;													//������
Uint16 _SC_Usn;														//���Ӷ��ѹ(V)
Uint16 _SC_Uro;                                                		//ת�ӿ�·��ѹ(V)	
Uint16 _SC_PLSPRVL;													//������ÿȦ��դ����
Uint16 _SC_MSTDBY;                                               	//�����������
Uint16 _SC_EXISTY1;                                               	//������ŵ��ڱ���1
Uint16 _SC_EXISTY2;                                               	//������ŵ��ڱ���2
Uint16 _SC_EXISTY3;                                               	//������ŵ��ڱ���3
Uint16 _SC_EXISTY4;                                               	//������ŵ��ڱ���4
Uint16 _SC_EXISTY5;                                               	//������ŵ��ڱ���5

Uint16 _BA_ERR4;													//���Ĵι�����Ϣ
Uint16 _BA_ERR3;													//�����ι�����Ϣ
Uint16 _BA_ERR2;													//�ڶ��ι�����Ϣ
Uint16 _BA_ERR1;													//��һ�ι�����Ϣ
Uint16 _BA_ERR5;													//ʾ����������Ϣ
//--------------------------------������Ϣ��-----------------------------------------------------
Uint16 _BA_EMIDRF;													//���¹���ʱ�� d�����ָ��(A)
Uint16 _BA_ENIQRF;													//���¹���ʱ�� q�����ָ��(A)
Uint16 _BA_EMIQRF;													//��¹��ʱ�� q�����ָ��(A)
Uint16 _BA_ETOQRF;													//���¹���ʱ�� ת��ָ��(NM)
Uint16 _BA_EURF;													//���¹���ʱ�� �м�ֱ����ѹ���(V)
Uint16 _BA_EUDC;													//���¹���ʱ�� �м�ֱ����ѹ(V)
Uint16 _BA_EAGLRF;													//���¹���ʱ�� �޹��Ƕ�ָ��()
Uint16 _BA_EIA1;													//���¹���ʱ�� ����A�������Чֵ(A)
Uint16 _BA_EIB1;													//���¹���ʱ�� ����B�������Чֵ(A)
Uint16 _BA_EIC1;													//���¹���ʱ�� ����C�������Чֵ(A)
Uint16 _BA_EIA2;													//���¹���ʱ�� ����A�������Чֵ(A)
Uint16 _BA_EIB2;													//���¹���ʱ�� �����B�������Чֵ(A)
Uint16 _BA_EIC2;													//���¹���ʱ�� �����C�������Чֵ(A)
Uint16 _BA_EUAB1;													//���¹���ʱ�� ����A���ѹ��Чֵ(V)
Uint16 _BA_EUBC1;													//���¹���ʱ�� ����B���ѹ��Чֵ(V)
Uint16 _BA_EUAB2;													//���¹���ʱ�� �������ѹ��Чֵ(V)
Uint16 _BA_EUBC2;													//���¹���ʱ�� �����A�������Чֵ(V)
Uint16 _BA_EUAB0;													//���¹���ʱ�� ����ǰAB�ߵ�ѹ��Чֵ(V)
Uint16 _BA_EUBC0;													//���¹���ʱ�� ���ǰBC�ߵ�ѹ��Чֵ(V)
Uint16 _BA_EFREQ;													//���¹���ʱ�� ����Ƶ��(hz)
Uint16 _BA_ESPEED;													//���¹���ʱ�� ���ת��(rpm)
Uint16 _BA_ENPRUD;              			//d�����Ϻ���ѹ����20091026atzy
Uint16 _BA_ENPRUQ;          				//q�����Ϻ���ѹ����20091026atzy
Uint16 _BA_ENPRUD2;          				//d�����Ϻ���ѹ���� �˲���20091026atzy
Uint16 _BA_ENPRUQ2;          				//q�����Ϻ���ѹ���� �˲���20091026atzy
Uint16 _BA_ENUDOUT;          				//���d��ѹ���20091026atzy
Uint16 _BA_ENUQOUT;          				//����q���ѹ���20091026atzy
Uint16 _BA_ETA1;													//���¹���ʱ�� ���������A�ű��¶�
Uint16 _BA_ETB1;													//���¹���ʱ�� ���������B�ű��¶�
Uint16 _BA_ETC1;													//���¹���ʱ�� ���������C�ű��¶�
Uint16 _BA_ETA2;													//���¹���ʱ�� ����������Aű��¶�
Uint16 _BA_ETB2;													//���¹���ʱ�� ����������B�ű����
Uint16 _BA_ETC2;													//��¹���ʱ�� ����������C�ű��¶�
Uint16 _BA_EPIONU;													//���¹���ʱ�� �����ѹ�����
Uint16 _BA_EPIONID;													//���¹���ʱ�� ����d����������
Uint16 _BA_EPIONIQ;													//���¹���ʱ�� ����q����������
Uint16 _BA_EMEXI;													//���¹���ʱ�� �����������ۼ���ֵ��ʾ
Uint16 _BA_EPIOMID;													//���¹���ʱ�� ����d����������
Uint16 _BA_EPIOMIQ;													//���¹���ʱ�� ����q����������
Uint16 _BA_ETLAC;													//���¹���ʱ�� �������¶�
Uint16 _BA_ETLDUDT;													//���¹���ʱ�� �������¶�
Uint16 _BA_ETSKIIP;													//���¹���ʱ�� SKIIP���
Uint16 _BA_ESTAIAC;	
Uint16 _BA_ESTAIBA;	
Uint16 _BA_ETOQFB;	
Uint16 _BA_EPSTA;	
Uint16 _BA_EPNPR;	
Uint16 _BA_EPGRID;	

Uint16 _BA_TIME4_0;													//���¹���ʱ��(��)
Uint16 _BA_TIME4_1;													//���¹���ʱ��(�)
Uint16 _BA_TIME4_2;													//���¹���ʱ��(ʱ)
Uint16 _BA_TIME4_3;													//���¹���ʱ��(��)
Uint16 _BA_TIME4_4;													//���¹��ʱ��(��)
Uint16 _BA_TIME4_5;													//���¹���ʱ��(��)

Uint16 _BA_TIME3_0;													//�����ι���ʱ��(��)
Uint16 _BA_TIME3_1;													//�����ι���ʱ��(��)
Uint16 _BA_TIME3_2;													//�����ι���ʱ��(ʱ)
Uint16 _BA_TIME3_3;													//�����ι���ʱ��(��)
Uint16 _BA_TIME3_4;													//�����ι���ʱ��(��)
Uint16 _BA_TIME3_5;													//�����ι��ʱ��(��)

Uint16 _BA_TIME2_0;													//�ڶ�����ʱ��(��)
Uint16 _BA_TIME2_1;													//�ڶ��ι���ʱ��(��)
Uint16 _BA_TIME2_2;													//�ڶ��ι��ϱ�?ʱ)
Uint16 _BA_TIME2_3;													//�ڶ��ι���ʱ��(��)
Uint16 _BA_TIME2_4;													//�ڶ��ι���ʱ��(��)
Uint16 _BA_TIME2_5;													//�ڶ��ι���ʱ?��)

Uint16 _BA_TIME1_0;													//��һ�ι���ʱ��(��)
Uint16 _BA_TIME1_1;													//��һ�ι���ʱ��(��)
Uint16 _BA_TIME1_2;													//��һ�ι���ʱ��(ʱ)
Uint16 _BA_TIME1_3;													//��һ�ι���ʱ��(��)
Uint16 _BA_TIME1_4;													//��һ�ι���ʱ��(��)
Uint16 _BA_TIME1_5;													//��һ�ι���ʱ��(��)

Uint16 _BA_TIME5_0;													//ʾ��������ʱ��(��)
Uint16 _BA_TIME5_1;													//ʾ��������ʱ��(��)
Uint16 _BA_TIME5_2;													//ʾ��������ʱ��(ʱ)
Uint16 _BA_TIME5_3;													//ʾ��������ʱ��(��)
Uint16 _BA_TIME5_4;													//ʾ��������ʱ��(��)
Uint16 _BA_TIME5_5;													//ʾ��������ʱ��(��)

//-------------------------------------���м�ر���-----------------------------------------------
Uint16 _BA_MIDRF;													//d�����ָ��(A)
Uint16 _BA_NIQRF;													//q�����ָ��(A)
Uint16 _BA_MIQRF;													//q�����ָ��(A)
Uint16 _BA_TOQRF;													//ת��ָ��(NM)
Uint16 _BA_AGLRF;													//�޹��Ƕ�ָ��(NM)
Uint16 _BA_TOQFB;													//ת�ط���(NM)
Uint16 _BA_URF;														//�м�ֱ����ѹ����(V)
Uint16 _BA_UDC;														//�м�ֱ����ѹ(V)
Uint16 _BA_IA1;														//���A�������Чֵ(A)
Uint16 _BA_IB1;														//����B������Ч�?A)
Uint16 _BA_IC1;														//����C�������Чֵ(A)
Uint16 _BA_IA2;														//�����A�������Чֵ(A)
Uint16 _BA_IB2;														//�����B������Чֵ(A)
Uint16 _BA_IC2;														//�����C�������Чֵ(A)
Uint16 _BA_UAB1;													//����AB�ߵ�ѹ��Чֵ(V)
Uint16 _BA_UBC1;													//����BC�ߵ�ѹ�Чֵ(V)
Uint16 _BA_UAB2;													//�����AB�ߵ�ѹ��Чֵ(V)
Uint16 _BA_UBC2;													//�����BC�ߵ�����Чֵ(V)
Uint16 _BA_UAB0;												    	//����ǰAB�ߵ�ѹ��Чֵ(V)
Uint16 _BA_UBC0;												    	//����ǰBC�ߵ�����Чֵ(V) 
Uint16 _BA_FREQ;													//����Ƶ�(hz)
Uint16 _BA_SPEED;													//���ת��(rpm)
Uint16 _BA_TA1;														//���������A����¶
Uint16 _BA_TB1;														//��������B�ű��¶�
Uint16 _BA_TC1;														//���������C�ű��¶�
Uint16 _BA_TA2;														//����������A�ű��¶�
Uint16 _BA_TB2;														//����������B�ű��¶�
Uint16 _BA_TC2;														//����������C�ű��¶�
Uint16 _BA_PIONU;													//�����ѹ�����
Uint16 _BA_PIONID;													//����d����������
Uint16 _BA_PIONIQ;													//����q����������
Uint16 _BA_MEXI;													//
Uint16 _BA_PIOMID;													//����d����������
Uint16 _BA_PIOMIQ;													//����q����������
Uint16 _BA_GRDUD;													//������������ѹd
Uint16 _BA_GRDUQ;													//������������ѹq

//Uint16 _BA_STAUD;													//���ӵ�ѹd MagnetCurve2013-12-13
Uint16 _BA_MC_IN;													//����У������ MagnetCurve2013-12-13
Uint16 _BA_MC_K;													//����У����� MagnetCurve2013-12-13
//Uint16 _BA_STAUQ;													//���ӵ�ѹq MagnetCurve2013-12-13

Uint16 _BA_NPRID;													//������������ѹd
Uint16 _BA_NPRIQ;													//������������ѹq
//Uint16 _BA_EXCID;													//������������ѹd
//Uint16 _BA_EXCIQ;
Uint16 _BA_SCRIA;													//SCR����a	20110906
Uint16 _BA_SCRIB;													//SCR����b	20110906
Uint16 _BA_TLAC;
Uint16 _BA_TLDUDT;
Uint16 _BA_TNSKIIP;
Uint16 _BA_TMSKIIP;
Uint16 _BA_STAUABD;													//����ͬ������ǰ����ǰ���ѹ��
Uint16 _BA_STAUBCD;													//����ͬ������ǰ����ǰ���ѹ��
Uint16 _BA_STAIAC;													//�����ߵ�����Чֵ��ʾ
Uint16 _BA_STAIBA;													//�����ߵ�����Чֵ��ʾ
Uint16 _BA_PSTA;
Uint16 _BA_PNPR;
Uint16 _BA_PGRID;
Uint16 _BA_QSTA;
Uint16 _BA_QNPR;
Uint16 _BA_QGRID;
Uint16 _BA_SSTA;
Uint16 _BA_SNPR;
Uint16 _BA_SGRID;

Uint16 _SC_NPR_TLOV;
Uint16 _SC_MPR_TLOV;
Uint16 _SC_LVUDC1;
Uint16 _SC_LVUDC2;
Uint16 _SC_LVIAC2;
Uint16 _SC_TSCRON;
Uint16 _SC_MPR_UD;
Uint16 _SC_MPR_UQ;
Uint16 _SC_MSPEED1;
Uint16 _SC_MSPEED2;
Uint16 _SC_UDSTAC;
Uint16 _SCIB_BAUD;													//485������
Uint16 _SC_SKPTOV;
Uint16 _SC_FREQ1;
Uint16 _SC_FREQ2;
 
//-----------------------�����ñ���-----------------------------------------------------------
int16 	zys[4];			//DA����
Uint16 	daindex[4]; 	//BJTULVRT201204


//int32 	zys = 0;
//int16 	zys1,zys2,zys3,zys4;
Uint32 	i_cnt1=0;  //����CCS������ʾ
Uint32 	i_cnt2=0;  //����CCS������ʾ
Uint32 	i_cnt3=0;  //����CCS������ʾ
float   draw1[150]={0.0},draw2[150]={0.0},draw3[150]={0.0},draw4[150]={0.0},draw5[150]={0.0};
float   draw6[150]={0.0};//,draw7[100]={0.0},draw8[100]={0.0},draw9[100]={0.0},draw10[100]={0.0};
Uint16 zsector = 0;
float testtheta;

Uint16 temp_flag3;		//120507
Uint16 TX_SPEED;		//120507

Uint16	state_n=0;		//110818
Uint16	state_m=0;		//110818
Uint16	action1=0;		//110818
Uint16	action2=0;		//110818

//----------20121103�����ӱ���--------------
float   GRD_Ut;
float   GRD_Utlv;		//201205LVRTatZB
float   kq;
Uint16	CNT_SCRON;		//20120602
float   Te_instant;
float   Te_instant2;
float   Te_instant3;

//---------20121210----------
float   lv_ctrl1=0;
float   lv_ctrl2=0;
float   lv_ctrl3=0;
float   lv_ctrl4=0;
float   lv_ctrl5=0;
float   lv_ctrl6=0;

//----20130225atsp----
float   kq_lv;
float   NGS_Udq_p_lv;
float   Te_feedback_lv;                    //ʵ��ת��ֵ����
Uint16	scrdone=0;		//20130222
Uint16	scrhold=0;		//20130223
Uint16	scroff1=0;		//20130303
Uint16	cnt_lv_clrerram=0;		//20130303

//--------------------
//---------20130801---------
Uint16	ecpostep1 = 0;
Uint16	ecpostep2 = 0;
Uint16	ecpostep3 = 0;

#ifdef __cplusplus
}
#endif /* extern "C" */


#endif

//===========================================================================
// No more.
//===========================================================================