
/* ==== __break @ 00462d29 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00462d29-00462d29
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


