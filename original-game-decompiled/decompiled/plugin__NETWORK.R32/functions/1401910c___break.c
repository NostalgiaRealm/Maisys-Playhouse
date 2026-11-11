
/* ==== __break @ 1401910c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401910c-1401910c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


