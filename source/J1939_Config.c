#include "J1939_Config.h"

/******************************J1939 ��ַ����******************************/
/* �豸Ĭ�ϵĵ�ַ����ַ�������й涨�ģ��ο�J1939�ĸ�¼B ��ַ�ͱ�ʶ���ķ��䣩 */
const j1939_uint8_t J1939_STARTING_ADDRESS[J1939_NODE_NUM] = {
    [Select_CAN_NODE_1] = 0x01,
    [Select_CAN_NODE_2] = 244,
    [Select_CAN_NODE_3] = 247,
    [Select_CAN_NODE_4] = 0,
};

/*
*���룺
*�����
*˵��������SAE J1939Э�飬������ҪCAN�������ṩ����3���˲�����J1939Э����롣�����˲����ֱ��������£�
        1. �����˲���0��ֻ���ܹ㲥��Ϣ��PF = 240 -255����
        2. �����˲���1��2ֻ����ȫ�ֵ�ַ��J1939_GLOBAL_ADDRESS��
        3. ���ų�������У����ı��˲���2������Ӧ�����߼���
    J1939_SetAddressFilter() �����������˲���2�ģ� ������Ҫ����PSλ��Ŀ���ַ������Ŀ���ǣ��ÿ�����
    ֻ���ܷ��͸����豸����Ϣ��
*���棺 �˲���0��1����CAN���������ã������Ӳ���˲����ò��Ǻ�����������ʹ������˲�����#define J1939SoftwareFilterEn
*�����������������ֲ��CANӲ���˲��������ã�Ϊ��J1939Э��ջ�������Ż�������ֻ����Ӳ���˲���
*/
void J1939_SetAddressFilter(j1939_uint8_t Ps_Address)
{
    switch (Can_Node) {
        case Select_CAN_NODE_1: {
            break;
        }

        case Select_CAN_NODE_2: {
            break;
        }

        case Select_CAN_NODE_3: {
            break;
        }

        case Select_CAN_NODE_4: {
            break;
        }

        default: {
            break;
        }
    }
}

/*
*���룺  *MsgPtr��Э��Ҫ���͵���Ϣ��
*�����
*˵����      ������ ��MsgPtr�ṹ�帳ֵ��CAN�����Դ��Ľṹ����
        �Ƚ����뺯����MsgPtr�е�����д��CAN�Ľṹ�壬�ٵ���CAN�����ķ��ͺ���
        Ĭ��֧��4·CANӲ�����շ���������4·��ֻ��������Ӧ��Can_Node���ش�������
        ������Select_CAN_NODE�����ֲ��䡣��ֱ�ӷ��أ�break����
*/
void J1939_CAN_Transmit(J1939_MESSAGE_t *MsgPtr)
{
    switch (Can_Node) {
        case Select_CAN_NODE_1: {
            /* ���ص�һ·CANӲ����29λID */

            /* CANӲ���������ݳ��� */

            /* CANӲ���������� */

            /* CANӲ������RTR */

            /* CANӲ����ʼ�������� */

            break;
        }

        case Select_CAN_NODE_2: {
            /* ���صڶ�·CANӲ����29λID */

            /* CANӲ���������ݳ��� */

            /* CANӲ���������� */

            /* CANӲ������RTR */

            /* CANӲ����ʼ�������� */

            break;
        }

        case Select_CAN_NODE_3: {
            /* ���ص���·CANӲ����29λID */

            /* CANӲ���������ݳ��� */

            /* CANӲ���������� */

            /* CANӲ������RTR */

            /* CANӲ����ʼ�������� */

            break;
        }

        case Select_CAN_NODE_4: {
            /* ���ص���·CANӲ����29λID */

            /* CANӲ���������ݳ��� */

            /* CANӲ���������� */

            /* CANӲ������RTR */

            /* CANӲ����ʼ�������� */

            break;
        }

        default: {
            break;
        }
    }
}
/*
*���룺     *MsgPtr ����Ҫ������ڴ��ָ��
*�����      1 | 0
*˵����      ��ȡCAN���������ݣ����û�����ݣ�����0
        ��CAN�е�����ȡ��������J1939_MESSAGE�ṹ����
        Ĭ��֧��4·CANӲ�����շ���������4·��ֻ��������Ӧ��Can_Node���ش�������
        ������Select_CAN_NODE�����ֲ��䡣��ֱ�ӷ��أ�return 0��
*/
int J1939_CAN_Receive(J1939_MESSAGE_t *MsgPtr)
{
    switch (Can_Node) {
        case Select_CAN_NODE_1: {
            if ("��Ĵ���")
            {

                /* ��Ĵ��룬��CANӲ��1 �н����ݶ�ȡ�󣬴��� MsgPtr */
                return 1;
            }

            return 0;
            break;
        }

        case Select_CAN_NODE_2: {
            break;
        }

        case Select_CAN_NODE_3: {
            break;
        }

        case Select_CAN_NODE_4: {
            break;
        }

        default: {
            return 0; /* û����Ϣ */
            break;
        }
    }

    return 0; /* û����Ϣ */
}

/*��ʹ���ж�ģʽ����������ĺ���������ֲ*/
#if J1939_POLL_ECAN == J1939_FALSE
/*
*���룺
*�����
*˵����ʹ�ܽ����ж�
*/
void J1939_RXinterruptEnable()
{
    ;
}
/*
*���룺
*�����
*˵����ʧ�ܽ����ж�
*/
void J1939_RXinterruptDisable()
{
    ;
}
/*
*���룺
*�����
*˵����ʹ�ܷ����ж�
*/
void J1939_TXinterruptEnable()
{
    ;
}
/*
*���룺
*�����
*˵����ʧ�ܷ����ж�
*/
void J1939_TXinterruptDisable()
{
    ;
}
/*
*���룺
*�����
*˵�������������жϱ���λ����Э��ջ���ж�ģʽ�£�Ҫ������Ϣ�������ô˺�����
    CAN�����������ͽ�ֱ�Ӱ���Ϣ���ͳ�ȥ������ҪЭ���ڵ����κ�can��������
*/
void J1939_TXinterruptOk()
{
    ;
}
/*
*���룺
*�����
*˵�������CAN������ص��жϲ�����ʶλ�������������жϱ�־λ�������жϱ�
    ־λ��can���ߴ����ʶλ��
*/
void CAN_identifier_clc()
{
    ;
}
#endif
