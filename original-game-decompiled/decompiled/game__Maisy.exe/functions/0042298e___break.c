
/* ==== __break @ 0042298e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042298e-0042298e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


