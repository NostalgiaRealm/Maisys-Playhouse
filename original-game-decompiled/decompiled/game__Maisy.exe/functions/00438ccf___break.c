
/* ==== __break @ 00438ccf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00438ccf-00438ccf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


