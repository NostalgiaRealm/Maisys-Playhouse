
/* ==== __break @ 1401e516 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e516-1401e516
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


