// �ȉ��� ifdef �u���b�N�� DLL ����̃G�N�X�|�[�g��e�Ղɂ���}�N�����쐬���邽�߂� 
// ��ʓI�ȕ��@�ł��B���� DLL ���̂��ׂẴt�@�C���́A�R�}���h ���C���Œ�`���ꂽ VIRTUALSCCI_EXPORTS
// �V���{�����g�p���ăR���p�C������܂��B���̃V���{���́A���� DLL ���g�p����v���W�F�N�g�ł͒�`�ł��܂���B
// �\�[�X�t�@�C�������̃t�@�C�����܂�ł��鑼�̃v���W�F�N�g�́A 
// VIRTUALSCCI_API �֐��� DLL ����C���|�[�g���ꂽ�ƌ��Ȃ��̂ɑ΂��A���� DLL �́A���̃}�N���Œ�`���ꂽ
// �V���{�����G�N�X�|�[�g���ꂽ�ƌ��Ȃ��܂��B
#ifdef VIRTUALSCCI_EXPORTS
#define VIRTUALSCCI_API __declspec(dllexport)
#else
#define VIRTUALSCCI_API __declspec(dllimport)
#endif

// ���̃N���X�� VirtualSCCI.dll ����G�N�X�|�[�g����܂����B
class VIRTUALSCCI_API CVirtualSCCI {
public:
	CVirtualSCCI(void);
	// TODO: ���\�b�h�������ɒǉ����Ă��������B
};

extern VIRTUALSCCI_API int nVirtualSCCI;

VIRTUALSCCI_API int fnVirtualSCCI(void);
