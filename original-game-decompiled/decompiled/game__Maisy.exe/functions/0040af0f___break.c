
/* ==== __break @ 0040af0f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040af0f-0040af0f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


