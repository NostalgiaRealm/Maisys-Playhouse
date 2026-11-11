
/* ==== __break @ 0040db18 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040db18-0040db18
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


