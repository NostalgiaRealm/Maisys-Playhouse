
/* ==== __break @ 00486ecf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00486ecf-00486ecf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


