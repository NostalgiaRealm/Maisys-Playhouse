
/* ==== __break @ 0042281e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042281e-0042281e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


