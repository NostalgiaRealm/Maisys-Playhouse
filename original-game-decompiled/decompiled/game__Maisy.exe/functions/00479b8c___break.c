
/* ==== __break @ 00479b8c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479b8c-00479b8c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


