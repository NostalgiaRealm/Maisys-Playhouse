
/* ==== __break @ 00470bbc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00470bbc-00470bbc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


