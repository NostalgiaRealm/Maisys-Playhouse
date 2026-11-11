
/* ==== __break @ 00479b97 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479b97-00479b97
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


