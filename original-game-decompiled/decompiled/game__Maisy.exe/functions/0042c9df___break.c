
/* ==== __break @ 0042c9df ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042c9df-0042c9df
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


