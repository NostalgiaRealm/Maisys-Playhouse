
/* ==== __break @ 00479b9f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479b9f-00479b9f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


