
/* ==== __break @ 0045aaba ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045aaba-0045aaba
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


