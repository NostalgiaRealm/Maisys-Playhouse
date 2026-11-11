
/* ==== __break @ 004799ff ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004799ff-004799ff
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


