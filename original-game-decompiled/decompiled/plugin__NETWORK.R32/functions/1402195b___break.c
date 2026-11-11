
/* ==== __break @ 1402195b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402195b-1402195b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


