
/* ==== __break @ 0040af08 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040af08-0040af08
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


