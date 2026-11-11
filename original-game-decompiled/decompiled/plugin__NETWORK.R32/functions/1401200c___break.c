
/* ==== __break @ 1401200c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401200c-1401200c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


