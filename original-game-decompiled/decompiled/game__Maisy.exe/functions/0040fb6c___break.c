
/* ==== __break @ 0040fb6c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040fb6c-0040fb6c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


