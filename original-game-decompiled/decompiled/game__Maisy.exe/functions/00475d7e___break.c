
/* ==== __break @ 00475d7e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00475d7e-00475d7e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


