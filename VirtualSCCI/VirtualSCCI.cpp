// VirtualSCCI.cpp : DLL �A�v���P�[�V�����p�ɃG�N�X�|�[�g�����֐����`���܂��B
//

#include "stdafx.h"
#include "VirtualSCCI.h"


// ����́A�G�N�X�|�[�g���ꂽ�ϐ��̗�ł��B
VIRTUALSCCI_API int nVirtualSCCI=0;

// ����́A�G�N�X�|�[�g���ꂽ�֐��̗�ł��B
VIRTUALSCCI_API int fnVirtualSCCI(void)
{
    return 42;
}

// ����́A�G�N�X�|�[�g���ꂽ�N���X�̃R���X�g���N�^�[�ł��B
// �N���X��`�Ɋւ��Ă� VirtualSCCI.h ���Q�Ƃ��Ă��������B
CVirtualSCCI::CVirtualSCCI()
{
    return;
}

