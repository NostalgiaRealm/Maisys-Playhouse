
/* ==== __break @ 00436fed ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00436fed-00436fed
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


