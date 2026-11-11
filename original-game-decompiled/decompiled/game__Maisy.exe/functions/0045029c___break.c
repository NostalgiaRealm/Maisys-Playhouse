
/* ==== __break @ 0045029c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045029c-0045029c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


