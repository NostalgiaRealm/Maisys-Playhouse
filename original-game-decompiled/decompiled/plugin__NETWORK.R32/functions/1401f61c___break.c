
/* ==== __break @ 1401f61c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401f61c-1401f61c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


