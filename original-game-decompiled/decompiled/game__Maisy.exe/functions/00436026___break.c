
/* ==== __break @ 00436026 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00436026-00436026
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


