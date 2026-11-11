
/* ==== __break @ 00470a3e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00470a3e-00470a3e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


