
/* ==== __break @ 0041076c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041076c-0041076c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


