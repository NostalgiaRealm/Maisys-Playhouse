
/* ==== __break @ 0040db1c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040db1c-0040db1c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


