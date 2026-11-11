
/* ==== __break @ 0045d13c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045d13c-0045d13c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


