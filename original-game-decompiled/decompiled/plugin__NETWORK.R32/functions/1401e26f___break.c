
/* ==== __break @ 1401e26f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e26f-1401e26f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


