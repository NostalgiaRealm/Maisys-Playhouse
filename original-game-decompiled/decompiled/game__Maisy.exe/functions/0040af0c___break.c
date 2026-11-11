
/* ==== __break @ 0040af0c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040af0c-0040af0c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


