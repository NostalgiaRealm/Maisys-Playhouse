
/* ==== __break @ 0049362e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049362e-0049362e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


