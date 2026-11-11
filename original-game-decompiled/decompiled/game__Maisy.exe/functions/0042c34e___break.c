
/* ==== __break @ 0042c34e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042c34e-0042c34e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


