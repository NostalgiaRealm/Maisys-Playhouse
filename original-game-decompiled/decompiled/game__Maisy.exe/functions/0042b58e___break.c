
/* ==== __break @ 0042b58e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042b58e-0042b58e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


